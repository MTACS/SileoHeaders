//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADONetworkUtilizationStatistics;

@interface GADONetworkUtilizationMonitor : NSObject
{
    GADONetworkUtilizationStatistics *_aggregatedStatistics;
    GADONetworkUtilizationStatistics *_initialStatistics;
    id _becomeActiveObserver;
    id _resignActiveObserver;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long wifiReceivedByteCount;
@property(readonly) unsigned long long wifiTransmittedByteCount;
@property(readonly) unsigned long long cellularReceivedByteCount;
@property(readonly) unsigned long long cellularTransmittedByteCount;
- (void)updateByteCounts;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

