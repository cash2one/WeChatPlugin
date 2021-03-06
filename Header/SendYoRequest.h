//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SendYoRequest : PBGeneratedMessage
{
    unsigned int hasToUserName:1;
    unsigned int hasType:1;
    unsigned int hasCount:1;
    unsigned int hasCreateTime:1;
    unsigned int hasClientMsgId:1;
    unsigned int hasMsgSource:1;
    unsigned int hasYoType:1;
    unsigned int type;
    unsigned int count;
    unsigned int createTime;
    unsigned int clientMsgId;
    unsigned int yoType;
    NSString *toUserName;
    NSString *msgSource;
}

+ (id)parseFromData:(id)arg1;
@property(nonatomic, setter=SetYoType:) unsigned int yoType; // @synthesize yoType;
@property(readonly, nonatomic) BOOL hasYoType; // @synthesize hasYoType;
@property(retain, nonatomic, setter=SetMsgSource:) NSString *msgSource; // @synthesize msgSource;
@property(readonly, nonatomic) BOOL hasMsgSource; // @synthesize hasMsgSource;
@property(nonatomic, setter=SetClientMsgId:) unsigned int clientMsgId; // @synthesize clientMsgId;
@property(readonly, nonatomic) BOOL hasClientMsgId; // @synthesize hasClientMsgId;
@property(nonatomic, setter=SetCreateTime:) unsigned int createTime; // @synthesize createTime;
@property(readonly, nonatomic) BOOL hasCreateTime; // @synthesize hasCreateTime;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
@property(nonatomic, setter=SetType:) unsigned int type; // @synthesize type;
@property(readonly, nonatomic) BOOL hasType; // @synthesize hasType;
@property(retain, nonatomic, setter=SetToUserName:) NSString *toUserName; // @synthesize toUserName;
@property(readonly, nonatomic) BOOL hasToUserName; // @synthesize hasToUserName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

