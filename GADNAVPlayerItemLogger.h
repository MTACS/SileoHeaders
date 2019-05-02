//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayerItem, GADNObserverCollection;

@interface GADNAVPlayerItemLogger : NSObject
{
    AVPlayerItem *_playerItem;
    id <GADNEventContextSource> _contextSource;
    GADNObserverCollection *_observers;
    _Bool _enabled;
}

- (void).cxx_destruct;
- (void)stopMonitoring;
- (void)startMonitoringOnMainThread;
- (void)startMonitoring;
- (void)dealloc;
- (id)initWithPlayerItem:(id)arg1 eventContextSource:(id)arg2;

@end

