//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADOClearcutCommandExecuting.h"

@class NSString, NSTimer;

@interface GADOClearcutTimerCommandExecutor : NSObject <GADOClearcutCommandExecuting>
{
    id <GADOClearcutCommandExecuting> _executor;
    double _beaconTimeInterval;
    NSTimer *_timer;
}

- (void).cxx_destruct;
- (void)sendBeacon;
- (void)asynchronouslyExecuteCommands:(id)arg1;
- (_Bool)isLoaded;
- (void)dealloc;
- (id)initWithClearcutCommandExecutor:(id)arg1 timeInterval:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

