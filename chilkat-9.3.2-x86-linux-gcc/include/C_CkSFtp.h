#ifndef _CkSFtp_H
#define _CkSFtp_H
#include "Chilkat_C.h"

HCkSFtp CkSFtp_Create(void);
void CkSFtp_Dispose(HCkSFtp handle);
void CkSFtp_getAccumulateBuffer(HCkSFtp cHandle, HCkByteData retval);
void CkSFtp_getClientIdentifier(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putClientIdentifier(HCkSFtp cHandle, const char *newVal);
void CkSFtp_getClientIpAddress(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putClientIpAddress(HCkSFtp cHandle, const char *newVal);
int CkSFtp_getConnectTimeoutMs(HCkSFtp cHandle);
void CkSFtp_putConnectTimeoutMs(HCkSFtp cHandle, int newVal);
void CkSFtp_getDebugLogFilePath(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putDebugLogFilePath(HCkSFtp cHandle, const char *newVal);
int CkSFtp_getDisconnectCode(HCkSFtp cHandle);
void CkSFtp_getDisconnectReason(HCkSFtp cHandle, HCkString retval);
BOOL CkSFtp_getEnableCache(HCkSFtp cHandle);
void CkSFtp_putEnableCache(HCkSFtp cHandle, BOOL newVal);
HCkSFtpProgress CkSFtp_getEventCallbackObject(HCkSFtp cHandle);
void CkSFtp_putEventCallbackObject(HCkSFtp cHandle, HCkSFtpProgress newVal);
void CkSFtp_getFilenameCharset(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putFilenameCharset(HCkSFtp cHandle, const char *newVal);
void CkSFtp_getForceCipher(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putForceCipher(HCkSFtp cHandle, const char *newVal);
BOOL CkSFtp_getForceV3(HCkSFtp cHandle);
void CkSFtp_putForceV3(HCkSFtp cHandle, BOOL newVal);
int CkSFtp_getHeartbeatMs(HCkSFtp cHandle);
void CkSFtp_putHeartbeatMs(HCkSFtp cHandle, int newVal);
void CkSFtp_getHostKeyFingerprint(HCkSFtp cHandle, HCkString retval);
void CkSFtp_getHttpProxyAuthMethod(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putHttpProxyAuthMethod(HCkSFtp cHandle, const char *newVal);
void CkSFtp_getHttpProxyDomain(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putHttpProxyDomain(HCkSFtp cHandle, const char *newVal);
void CkSFtp_getHttpProxyHostname(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putHttpProxyHostname(HCkSFtp cHandle, const char *newVal);
void CkSFtp_getHttpProxyPassword(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putHttpProxyPassword(HCkSFtp cHandle, const char *newVal);
int CkSFtp_getHttpProxyPort(HCkSFtp cHandle);
void CkSFtp_putHttpProxyPort(HCkSFtp cHandle, int newVal);
void CkSFtp_getHttpProxyUsername(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putHttpProxyUsername(HCkSFtp cHandle, const char *newVal);
int CkSFtp_getIdleTimeoutMs(HCkSFtp cHandle);
void CkSFtp_putIdleTimeoutMs(HCkSFtp cHandle, int newVal);
BOOL CkSFtp_getIncludeDotDirs(HCkSFtp cHandle);
void CkSFtp_putIncludeDotDirs(HCkSFtp cHandle, BOOL newVal);
int CkSFtp_getInitializeFailCode(HCkSFtp cHandle);
void CkSFtp_getInitializeFailReason(HCkSFtp cHandle, HCkString retval);
BOOL CkSFtp_getIsConnected(HCkSFtp cHandle);
BOOL CkSFtp_getKeepSessionLog(HCkSFtp cHandle);
void CkSFtp_putKeepSessionLog(HCkSFtp cHandle, BOOL newVal);
void CkSFtp_getLastErrorHtml(HCkSFtp cHandle, HCkString retval);
void CkSFtp_getLastErrorText(HCkSFtp cHandle, HCkString retval);
void CkSFtp_getLastErrorXml(HCkSFtp cHandle, HCkString retval);
int CkSFtp_getMaxPacketSize(HCkSFtp cHandle);
void CkSFtp_putMaxPacketSize(HCkSFtp cHandle, int newVal);
BOOL CkSFtp_getPasswordChangeRequested(HCkSFtp cHandle);
BOOL CkSFtp_getPreserveDate(HCkSFtp cHandle);
void CkSFtp_putPreserveDate(HCkSFtp cHandle, BOOL newVal);
int CkSFtp_getProtocolVersion(HCkSFtp cHandle);
void CkSFtp_getSessionLog(HCkSFtp cHandle, HCkString retval);
void CkSFtp_getSocksHostname(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putSocksHostname(HCkSFtp cHandle, const char *newVal);
void CkSFtp_getSocksPassword(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putSocksPassword(HCkSFtp cHandle, const char *newVal);
int CkSFtp_getSocksPort(HCkSFtp cHandle);
void CkSFtp_putSocksPort(HCkSFtp cHandle, int newVal);
void CkSFtp_getSocksUsername(HCkSFtp cHandle, HCkString retval);
void CkSFtp_putSocksUsername(HCkSFtp cHandle, const char *newVal);
int CkSFtp_getSocksVersion(HCkSFtp cHandle);
void CkSFtp_putSocksVersion(HCkSFtp cHandle, int newVal);
BOOL CkSFtp_getTcpNoDelay(HCkSFtp cHandle);
void CkSFtp_putTcpNoDelay(HCkSFtp cHandle, BOOL newVal);
int CkSFtp_getUploadChunkSize(HCkSFtp cHandle);
void CkSFtp_putUploadChunkSize(HCkSFtp cHandle, int newVal);
BOOL CkSFtp_getUtcMode(HCkSFtp cHandle);
void CkSFtp_putUtcMode(HCkSFtp cHandle, BOOL newVal);
BOOL CkSFtp_getUtf8(HCkSFtp cHandle);
void CkSFtp_putUtf8(HCkSFtp cHandle, BOOL newVal);
BOOL CkSFtp_getVerboseLogging(HCkSFtp cHandle);
void CkSFtp_putVerboseLogging(HCkSFtp cHandle, BOOL newVal);
void CkSFtp_getVersion(HCkSFtp cHandle, HCkString retval);
int CkSFtp_AccumulateBytes(HCkSFtp cHandle, const char *sftpHandle, int maxBytes);
BOOL CkSFtp_Add64(HCkSFtp cHandle, const char *n1, const char *n2, HCkString outStr);
BOOL CkSFtp_AuthenticatePk(HCkSFtp cHandle, const char *username, HCkSshKey privateKey);
BOOL CkSFtp_AuthenticatePw(HCkSFtp cHandle, const char *login, const char *password);
BOOL CkSFtp_AuthenticatePwPk(HCkSFtp cHandle, const char *username, const char *password, HCkSshKey privateKey);
void CkSFtp_ClearAccumulateBuffer(HCkSFtp cHandle);
void CkSFtp_ClearCache(HCkSFtp cHandle);
void CkSFtp_ClearSessionLog(HCkSFtp cHandle);
BOOL CkSFtp_CloseHandle(HCkSFtp cHandle, const char *sftpHandle);
BOOL CkSFtp_Connect(HCkSFtp cHandle, const char *hostname, int port);
BOOL CkSFtp_CopyFileAttr(HCkSFtp cHandle, const char *localFilePath, const char *remoteFilenameOrHandle, BOOL bIsHandle);
BOOL CkSFtp_CreateDir(HCkSFtp cHandle, const char *path);
void CkSFtp_Disconnect(HCkSFtp cHandle);
BOOL CkSFtp_DownloadFile(HCkSFtp cHandle, const char *sftpHandle, const char *toFilePath);
BOOL CkSFtp_DownloadFileByName(HCkSFtp cHandle, const char *remoteFilePath, const char *localFilePath);
BOOL CkSFtp_Eof(HCkSFtp cHandle, const char *sftpHandle);
HCkDateTime CkSFtp_GetFileCreateDt(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
BOOL CkSFtp_GetFileCreateTime(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, SYSTEMTIME *outSysTime);
BOOL CkSFtp_GetFileGroup(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, HCkString outStr);
BOOL CkSFtp_GetFileLastAccess(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, SYSTEMTIME *outSysTime);
HCkDateTime CkSFtp_GetFileLastAccessDt(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
BOOL CkSFtp_GetFileLastModified(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, SYSTEMTIME *outSysTime);
HCkDateTime CkSFtp_GetFileLastModifiedDt(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
BOOL CkSFtp_GetFileOwner(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, HCkString outStr);
int CkSFtp_GetFilePermissions(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
unsigned long CkSFtp_GetFileSize32(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
BOOL CkSFtp_GetFileSizeStr(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle, HCkString outStr);
BOOL CkSFtp_InitializeSftp(HCkSFtp cHandle);
BOOL CkSFtp_LastReadFailed(HCkSFtp cHandle, const char *sftpHandle);
int CkSFtp_LastReadNumBytes(HCkSFtp cHandle, const char *sftpHandle);
BOOL CkSFtp_OpenDir(HCkSFtp cHandle, const char *path, HCkString outStr);
BOOL CkSFtp_OpenFile(HCkSFtp cHandle, const char *filePath, const char *access, const char *createDisp, HCkString outStr);
HCkSFtpDir CkSFtp_ReadDir(HCkSFtp cHandle, const char *sftpHandle);
BOOL CkSFtp_ReadFileBytes(HCkSFtp cHandle, const char *sftpHandle, int numBytes, HCkByteData outBytes);
BOOL CkSFtp_ReadFileBytes32(HCkSFtp cHandle, const char *sftpHandle, int offset, int numBytes, HCkByteData outBytes);
BOOL CkSFtp_ReadFileBytes64(HCkSFtp cHandle, const char *sftpHandle, __int64 offset64, int numBytes, HCkByteData outBytes);
BOOL CkSFtp_ReadFileBytes64s(HCkSFtp cHandle, const char *sftpHandle, const char *offset64, int numBytes, HCkByteData outBytes);
BOOL CkSFtp_ReadFileText(HCkSFtp cHandle, const char *sftpHandle, int numBytes, const char *charset, HCkString outStr);
BOOL CkSFtp_ReadFileText32(HCkSFtp cHandle, const char *sftpHandle, int offset32, int numBytes, const char *charset, HCkString outStr);
BOOL CkSFtp_ReadFileText64(HCkSFtp cHandle, const char *sftpHandle, __int64 offset64, int numBytes, const char *charset, HCkString outStr);
BOOL CkSFtp_ReadFileText64s(HCkSFtp cHandle, const char *sftpHandle, const char *offset64, int numBytes, const char *charset, HCkString outStr);
BOOL CkSFtp_RealPath(HCkSFtp cHandle, const char *originalPath, const char *composePath, HCkString outStr);
BOOL CkSFtp_RemoveDir(HCkSFtp cHandle, const char *path);
BOOL CkSFtp_RemoveFile(HCkSFtp cHandle, const char *filePath);
BOOL CkSFtp_RenameFileOrDir(HCkSFtp cHandle, const char *oldPath, const char *newPath);
BOOL CkSFtp_ResumeDownloadFileByName(HCkSFtp cHandle, const char *remoteFilePath, const char *localFilePath);
BOOL CkSFtp_ResumeUploadFileByName(HCkSFtp cHandle, const char *remoteFilePath, const char *localFilePath);
BOOL CkSFtp_SaveLastError(HCkSFtp cHandle, const char *filename);
BOOL CkSFtp_SetCreateDt(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, HCkDateTime createTime);
BOOL CkSFtp_SetCreateTime(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, SYSTEMTIME *createTime);
BOOL CkSFtp_SetLastAccessDt(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, HCkDateTime createTime);
BOOL CkSFtp_SetLastAccessTime(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, SYSTEMTIME *lastAccessTime);
BOOL CkSFtp_SetLastModifiedDt(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, HCkDateTime createTime);
BOOL CkSFtp_SetLastModifiedTime(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, SYSTEMTIME *lastModTime);
BOOL CkSFtp_SetOwnerAndGroup(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, const char *owner, const char *group);
BOOL CkSFtp_SetPermissions(HCkSFtp cHandle, const char *pathOrHandle, BOOL bIsHandle, int perm);
BOOL CkSFtp_UnlockComponent(HCkSFtp cHandle, const char *unlockCode);
BOOL CkSFtp_UploadFile(HCkSFtp cHandle, const char *sftpHandle, const char *fromFilePath);
BOOL CkSFtp_UploadFileByName(HCkSFtp cHandle, const char *remoteFilePath, const char *localFilePath);
BOOL CkSFtp_WriteFileBytes(HCkSFtp cHandle, const char *sftpHandle, HCkByteData data);
BOOL CkSFtp_WriteFileBytes32(HCkSFtp cHandle, const char *sftpHandle, int offset, HCkByteData data);
BOOL CkSFtp_WriteFileBytes64(HCkSFtp cHandle, const char *sftpHandle, __int64 offset64, HCkByteData data);
BOOL CkSFtp_WriteFileBytes64s(HCkSFtp cHandle, const char *sftpHandle, const char *offset64, HCkByteData data);
BOOL CkSFtp_WriteFileText(HCkSFtp cHandle, const char *sftpHandle, const char *charset, const char *textData);
BOOL CkSFtp_WriteFileText32(HCkSFtp cHandle, const char *sftpHandle, int offset32, const char *charset, const char *textData);
BOOL CkSFtp_WriteFileText64(HCkSFtp cHandle, const char *sftpHandle, __int64 offset64, const char *charset, const char *textData);
BOOL CkSFtp_WriteFileText64s(HCkSFtp cHandle, const char *sftpHandle, const char *offset64, const char *charset, const char *textData);
const char *CkSFtp_add64(HCkSFtp cHandle, const char *n1, const char *n2);
const char *CkSFtp_clientIdentifier(HCkSFtp cHandle);
const char *CkSFtp_clientIpAddress(HCkSFtp cHandle);
const char *CkSFtp_debugLogFilePath(HCkSFtp cHandle);
const char *CkSFtp_disconnectReason(HCkSFtp cHandle);
const char *CkSFtp_filenameCharset(HCkSFtp cHandle);
const char *CkSFtp_forceCipher(HCkSFtp cHandle);
const char *CkSFtp_getFileGroup(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
const char *CkSFtp_getFileOwner(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
const char *CkSFtp_getFileSizeStr(HCkSFtp cHandle, const char *filePathOrHandle, BOOL bFollowLinks, BOOL bIsHandle);
const char *CkSFtp_hostKeyFingerprint(HCkSFtp cHandle);
const char *CkSFtp_httpProxyAuthMethod(HCkSFtp cHandle);
const char *CkSFtp_httpProxyDomain(HCkSFtp cHandle);
const char *CkSFtp_httpProxyHostname(HCkSFtp cHandle);
const char *CkSFtp_httpProxyPassword(HCkSFtp cHandle);
const char *CkSFtp_httpProxyUsername(HCkSFtp cHandle);
const char *CkSFtp_initializeFailReason(HCkSFtp cHandle);
const char *CkSFtp_lastErrorHtml(HCkSFtp cHandle);
const char *CkSFtp_lastErrorText(HCkSFtp cHandle);
const char *CkSFtp_lastErrorXml(HCkSFtp cHandle);
const char *CkSFtp_openDir(HCkSFtp cHandle, const char *path);
const char *CkSFtp_openFile(HCkSFtp cHandle, const char *filePath, const char *access, const char *createDisp);
const char *CkSFtp_readFileText(HCkSFtp cHandle, const char *sftpHandle, int numBytes, const char *charset);
const char *CkSFtp_readFileText32(HCkSFtp cHandle, const char *sftpHandle, int offset32, int numBytes, const char *charset);
const char *CkSFtp_readFileText64(HCkSFtp cHandle, const char *sftpHandle, __int64 offset64, int numBytes, const char *charset);
const char *CkSFtp_readFileText64s(HCkSFtp cHandle, const char *sftpHandle, const char *offset64, int numBytes, const char *charset);
const char *CkSFtp_realPath(HCkSFtp cHandle, const char *originalPath, const char *composePath);
const char *CkSFtp_sessionLog(HCkSFtp cHandle);
const char *CkSFtp_socksHostname(HCkSFtp cHandle);
const char *CkSFtp_socksPassword(HCkSFtp cHandle);
const char *CkSFtp_socksUsername(HCkSFtp cHandle);
const char *CkSFtp_version(HCkSFtp cHandle);
#endif
