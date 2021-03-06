//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADOCSIConfiguration, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GADOCSI : NSObject
{
    GADOCSIConfiguration *_configuration;
    NSObject<OS_dispatch_queue> *_lockQueue;
    long long _requestCount;
    NSMutableDictionary *_timeRecorders;
    NSMutableDictionary *_timestamps;
    NSString *_GWSQueryID;
}

+ (id)sharedInstance;
@property(copy) NSString *GWSQueryID; // @synthesize GWSQueryID=_GWSQueryID;
- (void).cxx_destruct;
- (long long)timestampForLabel:(id)arg1;
- (void)setTimestamp:(long long)arg1 forLabel:(id)arg2;
- (void)recordTimestampForLabel:(id)arg1;
- (id)timeRecorderForAction:(id)arg1;
- (void)sendReport;
- (id)init;

@end

