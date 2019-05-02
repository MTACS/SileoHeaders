//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADOAdViewResourceRequest, NSArray, NSData, NSHTTPURLResponse, NSMutableArray, NSMutableData, NSObject<OS_dispatch_queue>, NSString;

@interface GADOAdViewResource : NSObject
{
    NSMutableArray *_children;
    NSMutableData *_content;
    NSObject<OS_dispatch_queue> *_networkAddressQueue;
    NSString *_networkAddress;
    GADOAdViewResourceRequest *_request;
    long long _sequenceNumber;
    GADOAdViewResource *_parent;
    long long _type;
    NSHTTPURLResponse *_response;
}

@property(readonly, copy, nonatomic) NSData *content; // @synthesize content=_content;
@property(copy, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSArray *children; // @synthesize children=_children;
@property(readonly, nonatomic) __weak GADOAdViewResource *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) long long sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly, copy, nonatomic) GADOAdViewResourceRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)dictionaryRepresentationExcludingHeaders:(id)arg1;
- (id)description;
- (void)addRequestHeaders:(id)arg1;
- (void)appendContent:(id)arg1;
- (void)addChild:(id)arg1;
- (id)initWithRequest:(id)arg1 sequenceNumber:(long long)arg2;

@end
