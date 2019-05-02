//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADNJSContext, GADNObserverCollection, NSMutableDictionary;

@interface GADNCacheMonitor : NSObject
{
    GADNObserverCollection *_observers;
    GADNJSContext *_reporter;
    NSMutableDictionary *_cacheIDResourceBuffers;
    NSMutableDictionary *_cacheIDResourceBufferObservers;
}

- (void).cxx_destruct;
- (void)notifyCacheID:(id)arg1 responseHeaders:(id)arg2 fileURL:(id)arg3 status:(id)arg4 requestID:(id)arg5 error:(id)arg6;
- (void)handleResourceBuffer:(id)arg1 notification:(id)arg2 cacheID:(id)arg3 requestID:(id)arg4;
- (void)observeResourceBuffer:(id)arg1 cacheID:(id)arg2 requestID:(id)arg3;
- (void)handleRemoveResourceAction:(id)arg1;
- (void)handleCleanupCacheDirectoryAction;
- (void)handleCacheResourceAction:(id)arg1;
- (void)handleCachedResourceStatusCheckAction:(id)arg1;
- (id)initWithMessageSource:(id)arg1 reporter:(id)arg2;

@end

