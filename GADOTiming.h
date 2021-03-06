//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface GADOTiming : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    unsigned long long _startTimestamp;
    unsigned long long _endTimestamp;
    _Bool _explicitEnd;
    NSString *_category;
}

@property(nonatomic) _Bool explicitEnd; // @synthesize explicitEnd=_explicitEnd;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
- (void).cxx_destruct;
- (id)elapsedMillisecondsString;
- (unsigned long long)elapsedMilliseconds;
- (unsigned long long)endTimestamp;
- (unsigned long long)startTimestamp;
- (void)end;
- (void)start;
- (id)dictionaryRepresentation;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithCategory:(id)arg1;

@end

