//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADNEventContext, NSURL;

@interface GADNBackgroundTaskPinger : NSObject
{
    GADNEventContext *_context;
    unsigned long long _backgroundTaskIdentifier;
    NSURL *_URL;
}

- (void).cxx_destruct;
- (void)endBackgroundTask;
- (void)ping;
- (id)initWithURL:(id)arg1 eventContext:(id)arg2;

@end

