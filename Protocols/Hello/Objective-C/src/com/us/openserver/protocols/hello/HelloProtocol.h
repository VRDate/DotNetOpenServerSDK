//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./com/us/openserver/protocols/hello/HelloProtocol.java
//

#ifndef _ComUsOpenserverProtocolsHelloHelloProtocol_H_
#define _ComUsOpenserverProtocolsHelloHelloProtocol_H_

#include "J2ObjC_header.h"
#include "com/us/openserver/protocols/ProtocolBase.h"

@class ComUsOpenserverLevelEnum;

#define ComUsOpenserverProtocolsHelloHelloProtocol_PROTOCOL_IDENTIFIER 10

@interface ComUsOpenserverProtocolsHelloHelloProtocol : ComUsOpenserverProtocolsProtocolBase

#pragma mark Protected

- (instancetype)init;

- (void)logWithComUsOpenserverLevelEnum:(ComUsOpenserverLevelEnum *)level
                           withNSString:(NSString *)message;

@end

J2OBJC_EMPTY_STATIC_INIT(ComUsOpenserverProtocolsHelloHelloProtocol)

J2OBJC_STATIC_FIELD_GETTER(ComUsOpenserverProtocolsHelloHelloProtocol, PROTOCOL_IDENTIFIER, jint)

FOUNDATION_EXPORT void ComUsOpenserverProtocolsHelloHelloProtocol_init(ComUsOpenserverProtocolsHelloHelloProtocol *self);

FOUNDATION_EXPORT ComUsOpenserverProtocolsHelloHelloProtocol *new_ComUsOpenserverProtocolsHelloHelloProtocol_init() NS_RETURNS_RETAINED;

J2OBJC_TYPE_LITERAL_HEADER(ComUsOpenserverProtocolsHelloHelloProtocol)

#endif // _ComUsOpenserverProtocolsHelloHelloProtocol_H_
