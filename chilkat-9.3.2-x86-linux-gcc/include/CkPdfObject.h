// CkPdfObject.h: interface for the CkPdfObject class.
//
//////////////////////////////////////////////////////////////////////

#ifndef _CkPdfObject_H
#define _CkPdfObject_H



#include "CkString.h"
class CkByteData;
#include "CkObject.h"

#ifndef __sun__
#pragma pack (push, 8)
#endif
 

// CLASS: CkPdfObject
class CkPdfObject  : public CkObject
{
    private:
	void *m_impl;
	bool m_utf8;	// If true, all input "const char *" parameters are utf-8, otherwise they are ANSI strings.

	// Don't allow assignment or copying these objects.
	CkPdfObject(const CkPdfObject &);
	CkPdfObject &operator=(const CkPdfObject &);

	unsigned long nextIdx(void);
	unsigned long m_resultIdx;
	CkString m_resultString[10];

    public:
	void *getImpl(void) const;

	CkPdfObject(void *impl);

	CkPdfObject();
	virtual ~CkPdfObject();

	// May be called when finished with the object to free/dispose of any
	// internal resources held by the object. 
	void dispose(void);

	// BEGIN PUBLIC INTERFACE
	bool get_Utf8(void) const;
	void put_Utf8(bool b);

	// Error log retrieval and saving (these methods are common to all Chilkat VC++ classes.)
	bool SaveLastError(const char *filename);

	void LastErrorXml(CkString &str);
	void LastErrorHtml(CkString &str);
	void LastErrorText(CkString &str);

	const char *lastErrorText(void);
	const char *lastErrorXml(void);
	const char *lastErrorHtml(void);
	

	bool DictObjectRef(const char *key, CkString &outStr);
	const char *dictObjectRef(const char *key);
	CkPdfObject *DictObject(const char *key);
	CkPdfObject *IndirectObject(void);
	int get_ObjectType(void);
	void get_ObjectTypeStr(CkString &str);
	const char *objectTypeStr(void);
	bool DictString(const char *key, CkString &outStr);
	const char *dictString(const char *key);
	bool DictBool(const char *key);
	int DictInt(const char *key);
	int get_NumDictKeys(void);
	bool DictKey(int index, CkString &outStr);
	const char *dictKey(int index);
	bool StructureReport(CkString &outStr);
	const char *structureReport(void);
	// BOOLVALUE_BEGIN
	bool get_BoolValue(void);
	void put_BoolValue(bool newVal);
	// BOOLVALUE_END
	// INTVALUE_BEGIN
	int get_IntValue(void);
	void put_IntValue(int newVal);
	// INTVALUE_END
	// STRVALUE_BEGIN
	void get_StrValue(CkString &str);
	const char *strValue(void);
	void put_StrValue(const char *newVal);
	// STRVALUE_END
	// NAMEVALUE_BEGIN
	void get_NameValue(CkString &str);
	const char *nameValue(void);
	void put_NameValue(const char *newVal);
	// NAMEVALUE_END
	// INITASDICT_BEGIN
	bool InitAsDict(void);
	// INITASDICT_END
	// INITASSTREAM_BEGIN
	bool InitAsStream(void);
	// INITASSTREAM_END
	// INITASARRAY_BEGIN
	bool InitAsArray(void);
	// INITASARRAY_END

	// PDFOBJECT_INSERT_POINT

	// END PUBLIC INTERFACE


	// The following method(s) should not be called by an application.
	// They for internal use only.
	void setLastErrorProgrammingLanguage(int v);

};
#ifndef __sun__
#pragma pack (pop)
#endif



#endif


