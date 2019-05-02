//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADNAudioVideoManager, GADNRequestConfiguration, NSObject<OS_dispatch_queue>, NSString;

@interface GADNMobileAds : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _applicationMuted;
    float _applicationVolume;
    NSString *_googleMobileAdsAppID;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasConfigured
    GADNAudioVideoManager *_audioVideoManager;
    GADNRequestConfiguration *_requestConfiguration;
}

+ (id)sharedInstance;
+ (void)enableBackgroundAdLoading;
+ (void)disableSDKCrashReporting;
+ (void)disableAutomatedInAppPurchaseReporting;
+ (void)configureWithApplicationID:(id)arg1;
+ (void)initialize;
@property(readonly, nonatomic) GADNRequestConfiguration *requestConfiguration; // @synthesize requestConfiguration=_requestConfiguration;
@property(readonly, nonatomic) GADNAudioVideoManager *audioVideoManager; // @synthesize audioVideoManager=_audioVideoManager;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initializationStatus;
@property(readonly, copy, nonatomic) NSString *googleMobileAdsAppID;
- (void)setGoogleMobileAdsAppID:(id)arg1;
- (void)registerMediationAdapterClassName:(id)arg1;
- (_Bool)isSDKVersionAtLeastMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3;
@property(nonatomic) _Bool applicationMuted;
@property(nonatomic) float applicationVolume;
- (void)configureWithApplicationID:(id)arg1;
@property(readonly, nonatomic) NSString *extendedVersion;
@property(readonly, copy, nonatomic) NSString *version;
- (id)init;

@end

