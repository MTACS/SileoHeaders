//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADNMediationBannerAdConfiguration, GADNMediationInterstitialAdConfiguration, GADNMediationNativeAdConfiguration, GADNMediationRewardedAdConfiguration, GADNMediationServerConfiguration;

@protocol GADMediationAdapter <NSObject>
+ (Class)networkExtrasClass;
+ (CDStruct_f6aba300)adSDKVersion;
+ (CDStruct_f6aba300)version;

@optional
+ (void)updateConfiguration:(GADNMediationServerConfiguration *)arg1;
+ (void)setUp;
+ (void)setUpWithConfiguration:(GADNMediationServerConfiguration *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)loadRewardedAdForAdConfiguration:(GADNMediationRewardedAdConfiguration *)arg1 completionHandler:(id <GADMediationRewardedAdEventDelegate> (^)(id <GADMediationRewardedAd>, NSError *))arg2;
- (void)loadNativeAdForAdConfiguration:(GADNMediationNativeAdConfiguration *)arg1 completionHandler:(id <GADMediationNativeAdEventDelegate> (^)(id <GADMediationNativeAd>, NSError *))arg2;
- (void)loadInterstitialForAdConfiguration:(GADNMediationInterstitialAdConfiguration *)arg1 completionHandler:(id <GADMediationInterstitialAdEventDelegate> (^)(id <GADMediationInterstitialAd>, NSError *))arg2;
- (void)loadBannerForAdConfiguration:(GADNMediationBannerAdConfiguration *)arg1 completionHandler:(id <GADMediationBannerAdEventDelegate> (^)(id <GADMediationBannerAd>, NSError *))arg2;
@end

