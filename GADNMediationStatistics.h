//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface GADNMediationStatistics : NSObject
{
    NSMutableDictionary *_mediationStatistics;
}

- (void).cxx_destruct;
- (id)mediationStatisticsParameterOrderedByAllocationIDs:(id)arg1;
- (void)endTimingForAllocationID:(id)arg1 exitStatus:(long long)arg2;
- (void)startTimingForAllocationID:(id)arg1;
- (id)init;

@end

