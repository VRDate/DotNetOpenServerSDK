//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: ./com/us/openserver/protocols/hello/HelloProtocol.java
//

#include "HelloProtocol.h"
#include "IOSObjectArray.h"
#include "J2ObjC_source.h"
#include "Level.h"
#include "ProtocolBase.h"
#include "Session.h"

@implementation ComUsOpenserverProtocolsHelloHelloProtocol

J2OBJC_IGNORE_DESIGNATED_BEGIN
- (instancetype)init {
  ComUsOpenserverProtocolsHelloHelloProtocol_init(self);
  return self;
}
J2OBJC_IGNORE_DESIGNATED_END

- (void)logWithComUsOpenserverLevel:(ComUsOpenserverLevel *)level
                       withNSString:(NSString *)message {
  [((ComUsOpenserverSessionSession *) nil_chk(session_)) logWithComUsOpenserverLevel:level withNSString:NSString_formatWithNSString_withNSObjectArray_(@"[Hello] %s", [IOSObjectArray newArrayWithObjects:(id[]){ message } count:1 type:NSObject_class_()])];
}

+ (const J2ObjcClassInfo *)__metadata {
  static const J2ObjcMethodInfo methods[] = {
    { "init", "HelloProtocol", NULL, 0x4, NULL, NULL },
    { "logWithComUsOpenserverLevel:withNSString:", "log", "V", 0x4, NULL, NULL },
  };
  static const J2ObjcFieldInfo fields[] = {
    { "PROTOCOL_IDENTIFIER", "PROTOCOL_IDENTIFIER", 0x19, "I", NULL, NULL, .constantValue.asInt = ComUsOpenserverProtocolsHelloHelloProtocol_PROTOCOL_IDENTIFIER },
  };
  static const J2ObjcClassInfo _ComUsOpenserverProtocolsHelloHelloProtocol = { 2, "HelloProtocol", "com.us.openserver.protocols.hello", NULL, 0x1, 2, methods, 1, fields, 0, NULL, 0, NULL, NULL, NULL };
  return &_ComUsOpenserverProtocolsHelloHelloProtocol;
}

@end

void ComUsOpenserverProtocolsHelloHelloProtocol_init(ComUsOpenserverProtocolsHelloHelloProtocol *self) {
  ComUsOpenserverProtocolsProtocolBase_init(self);
}

ComUsOpenserverProtocolsHelloHelloProtocol *new_ComUsOpenserverProtocolsHelloHelloProtocol_init() {
  ComUsOpenserverProtocolsHelloHelloProtocol *self = [ComUsOpenserverProtocolsHelloHelloProtocol alloc];
  ComUsOpenserverProtocolsHelloHelloProtocol_init(self);
  return self;
}

ComUsOpenserverProtocolsHelloHelloProtocol *create_ComUsOpenserverProtocolsHelloHelloProtocol_init() {
  return new_ComUsOpenserverProtocolsHelloHelloProtocol_init();
}

J2OBJC_CLASS_TYPE_LITERAL_SOURCE(ComUsOpenserverProtocolsHelloHelloProtocol)
