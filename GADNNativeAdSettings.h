//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GADNNativeAdSettings : NSObject
{
    NSMutableDictionary *_nativeAdSettings;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)nativeAdSettings;
- (void)mediaViewUnavailableToRenderMediaContentForAdType:(id)arg1;
- (id)init;

@end

