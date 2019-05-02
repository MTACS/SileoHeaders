//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_queue>;

@interface GADNWebViewControllerStash : NSObject
{
    NSMutableSet *_webViewControllers;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)webViewConfigurationForMainDocumentURL:(id)arg1 context:(id *)arg2;
- (void)removeWebViewController:(id)arg1;
- (void)addWebViewController:(id)arg1;
- (id)init;

@end
