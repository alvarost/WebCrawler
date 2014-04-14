#include <C_CkSpider.h>
#include <C_CkStringArray.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <sys/time.h>
#include <pthread.h>
#include <unistd.h>

typedef char BIT;

struct timeval tv;
struct timeval start_tv;

HCkSpider spider;
HCkStringArray seenDomains;
HCkStringArray seedUrls;
const char * url;
const char * domain;
long i;
int j;
int x = 200;
int y = 200;
BOOL success;
const char * baseDomain;
int visitedWebs = 0;
int limitWebs = 0;

FILE * pFile;
FILE *fa;

pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

pthread_t thread;
pthread_attr_t attr;
int thread_counter = 0;
int totalThreads;

BOOL search(char *pattern, char *text)
{
	int m = strlen(pattern);
	BIT *R;
	int i, k,result;
	result = 0;

	if (pattern[0] == '\0') return result; //if the word you are searching for doesn’t exist

	/* Initialize the bit array R */
	R = malloc((m+1) * sizeof *R);
	R[0] = 1;
	for (k=1; k <= m; ++k)
	  R[k] = 0;

	for (i=0; text[i] != '\0'; ++i) { //from 0 until the end of the string (Html text)
		/* Update the bit array. */
		for (k=m; k >= 1; --k)
		  R[k] = R[k-1] && (text[i] == pattern[k-1]); //tries to find the match

		if (R[m]) {  //found it
			result = 1;
			break;
		}
	}

	free(R); // I WAANT TO BREAAK FREEEE
	return result;  //return 0 if there isn’t matches and 1 if it finds the word


}


void Insertar(FILE *fa,  HCkSpider spider)
{
   // Insertar al final:
   fseek(fa, 0, SEEK_END);
   fwrite(CkSpider_lastUrl(spider),strlen(CkSpider_lastUrl(spider)),1, fa);
   fwrite("\n",1,1,fa);

}

void* thread_function(char* pattern, int counter)
{
	/*
	 * Setting the mutex lock will ensure only one thread can access this part at a time
	 * The other threads will wait until the thread before it is done, before executing the code
	 *
	 * To see the difference you can comment out both pthread_mutex_lock statements
	 */

	printf("This is the count: %d\n", counter);

	if( counter > 1 && CkStringArray_getCount(seedUrls) == 0)
	{
		sleep(5);
	}

	while (CkStringArray_getCount(seedUrls) > 0) {

		url = CkStringArray_pop(seedUrls);
		CkSpider_Initialize(spider,url);

		//  Spider 5 URLs of this domain.
		//  but first, save the base domain in seenDomains

		domain = CkSpider_getUrlDomain(spider,url);
		CkStringArray_Append(seenDomains,CkSpider_getBaseDomain(spider,domain));

		for (i = 0; i <= 4; i++) {
			success = CkSpider_CrawlNext(spider);
			if (success != TRUE) {
				break;
			}

			//  Display the URL we just crawled.
			printf("%s\n",CkSpider_lastUrl(spider));
			visitedWebs++;

			printf("Thread %d", counter);

			if(search(pattern,(char*)CkSpider_lastHtml(spider)) == 1) {
				// printf("The search string is found on %s\n",CkSpider_lastUrl(spider));
				pthread_mutex_lock( &mutex1 );
				Insertar(fa,spider);       	//Write into the result file
				pthread_mutex_unlock( &mutex1 );
			}

			if(visitedWebs > limitWebs) //We make a limit of webpages to search
				break;

		}

		if(visitedWebs > limitWebs) //We make a limit of webpages to search
			break;

		//  Add the outbound links to seedUrls, except
		//  for the domains we've already seen.
		for (i = 0; i <= CkSpider_getNumOutboundLinks(spider) - 1; i++) {

			url = CkSpider_getOutboundLink(spider,i);

			domain = CkSpider_getUrlDomain(spider,url);

			baseDomain = CkSpider_getBaseDomain(spider,domain);
			if (!CkStringArray_Contains(seenDomains,baseDomain)) {
				CkStringArray_Append(seedUrls,url);
			}

		}

	}

	CkSpider_Dispose(spider);
	CkStringArray_Dispose(seenDomains);
	CkStringArray_Dispose(seedUrls);


	gettimeofday(&tv, NULL);

	printf("The search spent %f seconds", ((tv.tv_sec - start_tv.tv_sec) + (tv.tv_usec - start_tv.tv_usec) / 1000000.0));

	return pattern;
}

void* redirect(void* args)
{
	char *query;
	query = (char *) args;

	thread_counter++;

	thread_function(query, thread_counter);

	return 0;
}

void create(int number, char* pattern)
{
	int i;
	int rc;
	pthread_t threads[number];
	void *status;

	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

	for(i=0; i<number; i++)
	{
		rc = pthread_create(&threads[i], &attr, redirect, (char*)pattern);
		if(rc)
		{
			printf("ERROR: return code from thread creation is %d\n", rc);
			exit(-1);
		}
		printf("Thread %d created\n", i);
	}

	pthread_attr_destroy(&attr);

	for(i=0; i<number; i++)
	{
		rc = pthread_join(threads[i], &status);
		if(rc)
		{
			printf("ERROR: return code from pthread_join is %d\n", rc);
			exit(-1);
		}
		printf("Join succeeded for thread %d\n", i);
	}

	printf("Main completed. Exiting");
	pthread_exit(NULL);
}

int main()
{
		gettimeofday(&start_tv, NULL);

	   char aux [100];
	   char aux2 [100];
	   char aux3 [100];

	   for(j = 0; j < 100; j++){
			 aux[j] = '$';
			 aux2[j] = '$';
			 aux3[j] = '$';
	   }

	   pFile = fopen ("data.txt" , "r");
	   if (pFile == NULL) perror ("Error opening file");
	   else {
			 fgets (aux2 , 100 , pFile);
			 fgets (aux , 100 , pFile);
			 fgets (aux3, 100, pFile);
		 fclose (pFile);
	   }

	   limitWebs = atoi(aux3);

		 for(j = 0; j < x; j++) {
			 if(aux[j] == '$') x = j - 2;
		 }

		 for(j = 0; j < y; j++) {
			 if(aux2[j] == '\n') aux2[j] = ' ';
		 }

		 char query [x];
		 char web [y];

		 for(j = 0; j < x; j++)
			 query[j] = aux[j];

		 for(j = 0; j < y; j++)
			 web[j] = aux2[j];


		fa = fopen("index.dat", "w");

		printf("Web Crawler and search engine\n");
		printf("Developed by S.K.,L.P.,A.S.\n\n");

		printf("The request is: ");
		printf("%s\n",query);
		printf("And the webpage to start is: ");
		//  The Chilkat Spider component/library is free.
		spider = CkSpider_Create();

		seenDomains = CkStringArray_Create();
		seedUrls = CkStringArray_Create();

		CkStringArray_putUnique(seenDomains,TRUE);
		CkStringArray_putUnique(seedUrls,TRUE);

		CkStringArray_Append(seedUrls,web);

		//  Set our outbound URL exclude patterns
		CkSpider_AddAvoidOutboundLinkPattern(spider,"*?id=*");
		CkSpider_AddAvoidOutboundLinkPattern(spider,"*.mypages.*");
		CkSpider_AddAvoidOutboundLinkPattern(spider,"*.personal.*");
		CkSpider_AddAvoidOutboundLinkPattern(spider,"*.comcast.*");
		CkSpider_AddAvoidOutboundLinkPattern(spider,"*.aol.*");
		CkSpider_AddAvoidOutboundLinkPattern(spider,"*~*");

		//  Use a cache so we don't have to re-fetch URLs previously fetched.
		CkSpider_putCacheDir(spider,"/home/bas/webspidercache");
		CkSpider_putFetchFromCache(spider,TRUE);
		CkSpider_putUpdateCache(spider,TRUE);

		totalThreads = 4;
		create(totalThreads, query);

		// thread_function();

		return 0;
}
