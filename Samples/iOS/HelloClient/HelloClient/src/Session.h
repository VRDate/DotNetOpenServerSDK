//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./com/us/openserver/session/Session.java
//

#ifndef _ComUsOpenserverSessionSession_H_
#define _ComUsOpenserverSessionSession_H_

#include "J2ObjC_header.h"
#include "java/lang/Runnable.h"

@class ComUsOpenserverClient;
@class ComUsOpenserverLevelEnum;
@class ComUsOpenserverProtocolsBinaryReader;
@class ComUsOpenserverProtocolsProtocolBase;
@class IOSByteArray;
@class IOSIntArray;
@class JavaLangException;
@class JavaNetSocket;

@interface ComUsOpenserverSessionSession : NSObject < JavaLangRunnable > {
 @public
  jboolean IsAuthenticated_;
  NSString *UserName_;
}

#pragma mark Public

- (instancetype)initWithComUsOpenserverClient:(ComUsOpenserverClient *)client
                            withJavaNetSocket:(JavaNetSocket *)socket
                                 withNSString:(NSString *)address;

- (void)beginRead;

- (void)close;

- (void)closeWithInt:(jint)protocolId;

- (void)connectionLostWithJavaLangException:(JavaLangException *)ex;

- (void)dispose;

- (NSString *)getAddress;

- (IOSIntArray *)getLocalSupportedProtocolIds;

- (IOSIntArray *)getRemoteSupportedProtocolIds;

- (ComUsOpenserverProtocolsProtocolBase *)initialize__WithInt:(jint)protocolId
                                                       withId:(id)userData OBJC_METHOD_FAMILY_NONE;

- (void)logWithJavaLangException:(JavaLangException *)ex;

- (void)logWithComUsOpenserverLevelEnum:(ComUsOpenserverLevelEnum *)level
                           withNSString:(NSString *)message;

- (void)onCapabilitiesErrorWithInt:(jint)protocolId
                      withNSString:(NSString *)message;

- (void)onPacketReceivedWithComUsOpenserverProtocolsBinaryReader:(ComUsOpenserverProtocolsBinaryReader *)br;

- (void)run;

- (void)sendWithByteArray:(IOSByteArray *)buf;

- (void)signalClose;

@end

J2OBJC_EMPTY_STATIC_INIT(ComUsOpenserverSessionSession)

J2OBJC_FIELD_SETTER(ComUsOpenserverSessionSession, UserName_, NSString *)

FOUNDATION_EXPORT void ComUsOpenserverSessionSession_initWithComUsOpenserverClient_withJavaNetSocket_withNSString_(ComUsOpenserverSessionSession *self, ComUsOpenserverClient *client, JavaNetSocket *socket, NSString *address);

FOUNDATION_EXPORT ComUsOpenserverSessionSession *new_ComUsOpenserverSessionSession_initWithComUsOpenserverClient_withJavaNetSocket_withNSString_(ComUsOpenserverClient *client, JavaNetSocket *socket, NSString *address) NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComUsOpenserverSessionSession)

#endif // _ComUsOpenserverSessionSession_H_
