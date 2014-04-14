#ifndef _CkMailMan_H
#define _CkMailMan_H
#include "Chilkat_C.h"

HCkMailMan CkMailMan_Create(void);
void CkMailMan_Dispose(HCkMailMan handle);
BOOL CkMailMan_getAllOrNone(HCkMailMan cHandle);
void CkMailMan_putAllOrNone(HCkMailMan cHandle, BOOL newVal);
BOOL CkMailMan_getAutoFix(HCkMailMan cHandle);
void CkMailMan_putAutoFix(HCkMailMan cHandle, BOOL newVal);
BOOL CkMailMan_getAutoGenMessageId(HCkMailMan cHandle);
void CkMailMan_putAutoGenMessageId(HCkMailMan cHandle, BOOL newVal);
BOOL CkMailMan_getAutoSmtpRset(HCkMailMan cHandle);
void CkMailMan_putAutoSmtpRset(HCkMailMan cHandle, BOOL newVal);
void CkMailMan_getClientIpAddress(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putClientIpAddress(HCkMailMan cHandle, const char *newVal);
long CkMailMan_getConnectTimeout(HCkMailMan cHandle);
void CkMailMan_putConnectTimeout(HCkMailMan cHandle, long newVal);
void CkMailMan_getDebugLogFilePath(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putDebugLogFilePath(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getDsnEnvid(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putDsnEnvid(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getDsnNotify(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putDsnNotify(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getDsnRet(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putDsnRet(HCkMailMan cHandle, const char *newVal);
BOOL CkMailMan_getEmbedCertChain(HCkMailMan cHandle);
void CkMailMan_putEmbedCertChain(HCkMailMan cHandle, BOOL newVal);
HCkMailProgress CkMailMan_getEventCallbackObject(HCkMailMan cHandle);
void CkMailMan_putEventCallbackObject(HCkMailMan cHandle, HCkMailProgress newVal);
void CkMailMan_getFilter(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putFilter(HCkMailMan cHandle, const char *newVal);
long CkMailMan_getHeartbeatMs(HCkMailMan cHandle);
void CkMailMan_putHeartbeatMs(HCkMailMan cHandle, long newVal);
void CkMailMan_getHeloHostname(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putHeloHostname(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getHttpProxyAuthMethod(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putHttpProxyAuthMethod(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getHttpProxyDomain(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putHttpProxyDomain(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getHttpProxyHostname(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putHttpProxyHostname(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getHttpProxyPassword(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putHttpProxyPassword(HCkMailMan cHandle, const char *newVal);
int CkMailMan_getHttpProxyPort(HCkMailMan cHandle);
void CkMailMan_putHttpProxyPort(HCkMailMan cHandle, int newVal);
void CkMailMan_getHttpProxyUsername(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putHttpProxyUsername(HCkMailMan cHandle, const char *newVal);
BOOL CkMailMan_getImmediateDelete(HCkMailMan cHandle);
void CkMailMan_putImmediateDelete(HCkMailMan cHandle, BOOL newVal);
BOOL CkMailMan_getIncludeRootCert(HCkMailMan cHandle);
void CkMailMan_putIncludeRootCert(HCkMailMan cHandle, BOOL newVal);
BOOL CkMailMan_getIsSmtpConnected(HCkMailMan cHandle);
void CkMailMan_getLastErrorHtml(HCkMailMan cHandle, HCkString retval);
void CkMailMan_getLastErrorText(HCkMailMan cHandle, HCkString retval);
void CkMailMan_getLastErrorXml(HCkMailMan cHandle, HCkString retval);
void CkMailMan_getLastSendQFilename(HCkMailMan cHandle, HCkString retval);
long CkMailMan_getLastSmtpStatus(HCkMailMan cHandle);
void CkMailMan_getLogMailReceivedFilename(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putLogMailReceivedFilename(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getLogMailSentFilename(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putLogMailSentFilename(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getMailHost(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putMailHost(HCkMailMan cHandle, const char *newVal);
long CkMailMan_getMailPort(HCkMailMan cHandle);
void CkMailMan_putMailPort(HCkMailMan cHandle, long newVal);
long CkMailMan_getMaxCount(HCkMailMan cHandle);
void CkMailMan_putMaxCount(HCkMailMan cHandle, long newVal);
BOOL CkMailMan_getOpaqueSigning(HCkMailMan cHandle);
void CkMailMan_putOpaqueSigning(HCkMailMan cHandle, BOOL newVal);
BOOL CkMailMan_getPop3SPA(HCkMailMan cHandle);
void CkMailMan_putPop3SPA(HCkMailMan cHandle, BOOL newVal);
int CkMailMan_getPop3SessionId(HCkMailMan cHandle);
void CkMailMan_getPop3SessionLog(HCkMailMan cHandle, HCkString retval);
BOOL CkMailMan_getPop3SslServerCertVerified(HCkMailMan cHandle);
BOOL CkMailMan_getPop3Stls(HCkMailMan cHandle);
void CkMailMan_putPop3Stls(HCkMailMan cHandle, BOOL newVal);
void CkMailMan_getPopPassword(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putPopPassword(HCkMailMan cHandle, const char *newVal);
void CkMailMan_putPopPasswordBase64(HCkMailMan cHandle, const char *newVal);
BOOL CkMailMan_getPopSsl(HCkMailMan cHandle);
void CkMailMan_putPopSsl(HCkMailMan cHandle, BOOL newVal);
void CkMailMan_getPopUsername(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putPopUsername(HCkMailMan cHandle, const char *newVal);
long CkMailMan_getReadTimeout(HCkMailMan cHandle);
void CkMailMan_putReadTimeout(HCkMailMan cHandle, long newVal);
BOOL CkMailMan_getRequireSslCertVerify(HCkMailMan cHandle);
void CkMailMan_putRequireSslCertVerify(HCkMailMan cHandle, BOOL newVal);
BOOL CkMailMan_getResetDateOnLoad(HCkMailMan cHandle);
void CkMailMan_putResetDateOnLoad(HCkMailMan cHandle, BOOL newVal);
int CkMailMan_getSendBufferSize(HCkMailMan cHandle);
void CkMailMan_putSendBufferSize(HCkMailMan cHandle, int newVal);
BOOL CkMailMan_getSendIndividual(HCkMailMan cHandle);
void CkMailMan_putSendIndividual(HCkMailMan cHandle, BOOL newVal);
long CkMailMan_getSizeLimit(HCkMailMan cHandle);
void CkMailMan_putSizeLimit(HCkMailMan cHandle, long newVal);
void CkMailMan_getSmtpAuthMethod(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putSmtpAuthMethod(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getSmtpHost(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putSmtpHost(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getSmtpLoginDomain(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putSmtpLoginDomain(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getSmtpPassword(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putSmtpPassword(HCkMailMan cHandle, const char *newVal);
long CkMailMan_getSmtpPort(HCkMailMan cHandle);
void CkMailMan_putSmtpPort(HCkMailMan cHandle, long newVal);
void CkMailMan_getSmtpSessionLog(HCkMailMan cHandle, HCkString retval);
BOOL CkMailMan_getSmtpSsl(HCkMailMan cHandle);
void CkMailMan_putSmtpSsl(HCkMailMan cHandle, BOOL newVal);
BOOL CkMailMan_getSmtpSslServerCertVerified(HCkMailMan cHandle);
void CkMailMan_getSmtpUsername(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putSmtpUsername(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getSocksHostname(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putSocksHostname(HCkMailMan cHandle, const char *newVal);
void CkMailMan_getSocksPassword(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putSocksPassword(HCkMailMan cHandle, const char *newVal);
int CkMailMan_getSocksPort(HCkMailMan cHandle);
void CkMailMan_putSocksPort(HCkMailMan cHandle, int newVal);
void CkMailMan_getSocksUsername(HCkMailMan cHandle, HCkString retval);
void CkMailMan_putSocksUsername(HCkMailMan cHandle, const char *newVal);
int CkMailMan_getSocksVersion(HCkMailMan cHandle);
void CkMailMan_putSocksVersion(HCkMailMan cHandle, int newVal);
BOOL CkMailMan_getStartTLS(HCkMailMan cHandle);
void CkMailMan_putStartTLS(HCkMailMan cHandle, BOOL newVal);
BOOL CkMailMan_getUseApop(HCkMailMan cHandle);
void CkMailMan_putUseApop(HCkMailMan cHandle, BOOL newVal);
BOOL CkMailMan_getUtf8(HCkMailMan cHandle);
void CkMailMan_putUtf8(HCkMailMan cHandle, BOOL newVal);
BOOL CkMailMan_getVerboseLogging(HCkMailMan cHandle);
void CkMailMan_putVerboseLogging(HCkMailMan cHandle, BOOL newVal);
void CkMailMan_getVersion(HCkMailMan cHandle, HCkString retval);
BOOL CkMailMan_AddPfxSourceData(HCkMailMan cHandle, HCkByteData pfxData, const char *password);
BOOL CkMailMan_AddPfxSourceFile(HCkMailMan cHandle, const char *pfxFilePath, const char *password);
long CkMailMan_CheckMail(HCkMailMan cHandle);
void CkMailMan_ClearBadEmailAddresses(HCkMailMan cHandle);
void CkMailMan_ClearPop3SessionLog(HCkMailMan cHandle);
void CkMailMan_ClearSmtpSessionLog(HCkMailMan cHandle);
BOOL CkMailMan_CloseSmtpConnection(HCkMailMan cHandle);
HCkEmailBundle CkMailMan_CopyMail(HCkMailMan cHandle);
BOOL CkMailMan_DeleteBundle(HCkMailMan cHandle, HCkEmailBundle bundle);
BOOL CkMailMan_DeleteByMsgnum(HCkMailMan cHandle, int msgnum);
BOOL CkMailMan_DeleteByUidl(HCkMailMan cHandle, const char *uidl);
BOOL CkMailMan_DeleteEmail(HCkMailMan cHandle, HCkEmail email);
BOOL CkMailMan_DeleteMultiple(HCkMailMan cHandle, HCkStringArray uidlArray);
HCkEmail CkMailMan_FetchByMsgnum(HCkMailMan cHandle, int msgnum);
HCkEmail CkMailMan_FetchEmail(HCkMailMan cHandle, const char *uidl);
BOOL CkMailMan_FetchMime(HCkMailMan cHandle, const char *uidl, HCkByteData outData);
BOOL CkMailMan_FetchMimeByMsgnum(HCkMailMan cHandle, int msgnum, HCkByteData outBytes);
HCkEmailBundle CkMailMan_FetchMultiple(HCkMailMan cHandle, HCkStringArray uidlArray);
HCkEmailBundle CkMailMan_FetchMultipleHeaders(HCkMailMan cHandle, HCkStringArray uidlArray, long numBodyLines);
HCkStringArray CkMailMan_FetchMultipleMime(HCkMailMan cHandle, HCkStringArray uidlArray);
HCkEmail CkMailMan_FetchSingleHeader(HCkMailMan cHandle, long numBodyLines, long msgNum);
HCkEmail CkMailMan_FetchSingleHeaderByUidl(HCkMailMan cHandle, long numBodyLines, const char *uidl);
HCkEmailBundle CkMailMan_GetAllHeaders(HCkMailMan cHandle, long numBodyLines);
HCkStringArray CkMailMan_GetBadEmailAddresses(HCkMailMan cHandle);
HCkEmail CkMailMan_GetFullEmail(HCkMailMan cHandle, HCkEmail email);
HCkEmailBundle CkMailMan_GetHeaders(HCkMailMan cHandle, long numBodyLines, long fromIndex, long toIndex);
int CkMailMan_GetMailboxCount(HCkMailMan cHandle);
BOOL CkMailMan_GetMailboxInfoXml(HCkMailMan cHandle, HCkString outXml);
unsigned long CkMailMan_GetMailboxSize(HCkMailMan cHandle);
HCkCert CkMailMan_GetPop3SslServerCert(HCkMailMan cHandle);
int CkMailMan_GetSizeByUidl(HCkMailMan cHandle, const char *uidl);
HCkCert CkMailMan_GetSmtpSslServerCert(HCkMailMan cHandle);
HCkStringArray CkMailMan_GetUidls(HCkMailMan cHandle);
BOOL CkMailMan_IsSmtpDsnCapable(HCkMailMan cHandle);
BOOL CkMailMan_IsUnlocked(HCkMailMan cHandle);
HCkEmail CkMailMan_LoadEml(HCkMailMan cHandle, const char *emlFilename);
HCkEmailBundle CkMailMan_LoadMbx(HCkMailMan cHandle, const char *mbxFileName);
HCkEmail CkMailMan_LoadMime(HCkMailMan cHandle, const char *mimeText);
HCkEmail CkMailMan_LoadXmlEmail(HCkMailMan cHandle, const char *folderPath);
HCkEmail CkMailMan_LoadXmlEmailString(HCkMailMan cHandle, const char *xmlString);
HCkEmailBundle CkMailMan_LoadXmlFile(HCkMailMan cHandle, const char *folderPath);
HCkEmailBundle CkMailMan_LoadXmlString(HCkMailMan cHandle, const char *xmlString);
#ifndef WINCE
BOOL CkMailMan_MxLookup(HCkMailMan cHandle, const char *emailAddr, HCkString outStrHostname);
#endif
#ifndef WINCE
HCkStringArray CkMailMan_MxLookupAll(HCkMailMan cHandle, const char *emailAddress);
#endif
BOOL CkMailMan_OpenSmtpConnection(HCkMailMan cHandle);
BOOL CkMailMan_Pop3BeginSession(HCkMailMan cHandle);
BOOL CkMailMan_Pop3EndSession(HCkMailMan cHandle);
BOOL CkMailMan_Pop3EndSessionNoQuit(HCkMailMan cHandle);
BOOL CkMailMan_Pop3Noop(HCkMailMan cHandle);
BOOL CkMailMan_Pop3Reset(HCkMailMan cHandle);
BOOL CkMailMan_Pop3SendRawCommand(HCkMailMan cHandle, const char *command, const char *charset, HCkString outStr);
BOOL CkMailMan_QuickSend(HCkMailMan cHandle, const char *fromAddr, const char *toAddrs, const char *subject, const char *body, const char *smtpServer);
BOOL CkMailMan_RenderToMime(HCkMailMan cHandle, HCkEmail email, HCkString outStr);
BOOL CkMailMan_RenderToMimeBytes(HCkMailMan cHandle, HCkEmail email, HCkByteData outBytes);
BOOL CkMailMan_SaveLastError(HCkMailMan cHandle, const char *filename);
BOOL CkMailMan_SendBundle(HCkMailMan cHandle, HCkEmailBundle bundle);
BOOL CkMailMan_SendEmail(HCkMailMan cHandle, HCkEmail email);
BOOL CkMailMan_SendMime(HCkMailMan cHandle, const char *from, const char *recipients, const char *mimeMsg);
BOOL CkMailMan_SendMimeBytes(HCkMailMan cHandle, const char *from, const char *recipients, HCkByteData mimeData);
#ifndef WINCE
BOOL CkMailMan_SendMimeBytesQ(HCkMailMan cHandle, const char *from, const char *recipients, HCkByteData mimeData);
#endif
BOOL CkMailMan_SendMimeQ(HCkMailMan cHandle, const char *from, const char *recipients, const char *mimeMsg);
BOOL CkMailMan_SendMimeToList(HCkMailMan cHandle, const char *from, const char *distListFile, const char *mimeText);
#ifndef WINCE
BOOL CkMailMan_SendQ(HCkMailMan cHandle, HCkEmail email);
#endif
#ifndef WINCE
BOOL CkMailMan_SendQ2(HCkMailMan cHandle, HCkEmail email, const char *queueDir);
#endif
BOOL CkMailMan_SendToDistributionList(HCkMailMan cHandle, HCkEmail email, HCkStringArray sa);
#if defined(WIN32) && !defined(__MINGW32__)
#if defined(WIN32) && !defined(WINCE) && !defined(__MINGW32__)
BOOL CkMailMan_SetCSP(HCkMailMan cHandle, HCkCSP csp);
#endif
#endif
BOOL CkMailMan_SetDecryptCert2(HCkMailMan cHandle, HCkCert cert, HCkPrivateKey key);
BOOL CkMailMan_SetSslClientCert(HCkMailMan cHandle, HCkCert cert);
BOOL CkMailMan_SetSslClientCertPem(HCkMailMan cHandle, const char *pemDataOrFilename, const char *pemPassword);
BOOL CkMailMan_SetSslClientCertPfx(HCkMailMan cHandle, const char *pfxFilename, const char *pfxPassword, const char *certSubjectCN);
BOOL CkMailMan_SmtpNoop(HCkMailMan cHandle);
BOOL CkMailMan_SmtpReset(HCkMailMan cHandle);
BOOL CkMailMan_SmtpSendRawCommand(HCkMailMan cHandle, const char *command, const char *charset, BOOL bEncodeBase64, HCkString outStr);
BOOL CkMailMan_SshAuthenticatePk(HCkMailMan cHandle, BOOL bSmtp, const char *sshLogin, HCkSshKey privateKey);
BOOL CkMailMan_SshAuthenticatePw(HCkMailMan cHandle, BOOL bSmtp, const char *sshLogin, const char *sshPassword);
BOOL CkMailMan_SshCloseTunnel(HCkMailMan cHandle, BOOL bSmtp);
BOOL CkMailMan_SshTunnel(HCkMailMan cHandle, BOOL bSmtp, const char *sshServerHostname, int sshServerPort);
HCkEmailBundle CkMailMan_TransferMail(HCkMailMan cHandle);
HCkStringArray CkMailMan_TransferMultipleMime(HCkMailMan cHandle, HCkStringArray uidlArray);
BOOL CkMailMan_UnlockComponent(HCkMailMan cHandle, const char *code);
BOOL CkMailMan_VerifyPopConnection(HCkMailMan cHandle);
BOOL CkMailMan_VerifyPopLogin(HCkMailMan cHandle);
BOOL CkMailMan_VerifyRecipients(HCkMailMan cHandle, HCkEmail email, HCkStringArray saBadAddrs);
BOOL CkMailMan_VerifySmtpConnection(HCkMailMan cHandle);
BOOL CkMailMan_VerifySmtpLogin(HCkMailMan cHandle);
const char *CkMailMan_clientIpAddress(HCkMailMan cHandle);
const char *CkMailMan_debugLogFilePath(HCkMailMan cHandle);
const char *CkMailMan_dsnEnvid(HCkMailMan cHandle);
const char *CkMailMan_dsnNotify(HCkMailMan cHandle);
const char *CkMailMan_dsnRet(HCkMailMan cHandle);
const char *CkMailMan_filter(HCkMailMan cHandle);
const char *CkMailMan_getMailboxInfoXml(HCkMailMan cHandle);
const char *CkMailMan_heloHostname(HCkMailMan cHandle);
const char *CkMailMan_httpProxyAuthMethod(HCkMailMan cHandle);
const char *CkMailMan_httpProxyDomain(HCkMailMan cHandle);
const char *CkMailMan_httpProxyHostname(HCkMailMan cHandle);
const char *CkMailMan_httpProxyPassword(HCkMailMan cHandle);
const char *CkMailMan_httpProxyUsername(HCkMailMan cHandle);
const char *CkMailMan_lastErrorHtml(HCkMailMan cHandle);
const char *CkMailMan_lastErrorText(HCkMailMan cHandle);
const char *CkMailMan_lastErrorXml(HCkMailMan cHandle);
const char *CkMailMan_lastSendQFilename(HCkMailMan cHandle);
const char *CkMailMan_logMailReceivedFilename(HCkMailMan cHandle);
const char *CkMailMan_logMailSentFilename(HCkMailMan cHandle);
const char *CkMailMan_mailHost(HCkMailMan cHandle);
#ifndef WINCE
const char *CkMailMan_mxLookup(HCkMailMan cHandle, const char *emailAddr);
#endif
const char *CkMailMan_pop3SendRawCommand(HCkMailMan cHandle, const char *command, const char *charset);
const char *CkMailMan_pop3SessionLog(HCkMailMan cHandle);
const char *CkMailMan_popPassword(HCkMailMan cHandle);
const char *CkMailMan_popUsername(HCkMailMan cHandle);
const char *CkMailMan_renderToMime(HCkMailMan cHandle, HCkEmail email);
const char *CkMailMan_smtpAuthMethod(HCkMailMan cHandle);
const char *CkMailMan_smtpHost(HCkMailMan cHandle);
const char *CkMailMan_smtpLoginDomain(HCkMailMan cHandle);
const char *CkMailMan_smtpPassword(HCkMailMan cHandle);
const char *CkMailMan_smtpSendRawCommand(HCkMailMan cHandle, const char *command, const char *charset, BOOL bEncodeBase64);
const char *CkMailMan_smtpSessionLog(HCkMailMan cHandle);
const char *CkMailMan_smtpUsername(HCkMailMan cHandle);
const char *CkMailMan_socksHostname(HCkMailMan cHandle);
const char *CkMailMan_socksPassword(HCkMailMan cHandle);
const char *CkMailMan_socksUsername(HCkMailMan cHandle);
const char *CkMailMan_version(HCkMailMan cHandle);
#endif