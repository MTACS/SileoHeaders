//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADCustomEventBannerDelegate.h"
#import "GADNAdRendering.h"

@class GADNBannerAd, GADNMediatedIntermission, GADNServerTransaction, NSString, UIViewController;

@interface GADNCustomEventBannerAdRenderer : NSObject <GADCustomEventBannerDelegate, GADNAdRendering>
{
    GADNServerTransaction *_transaction;
    struct NSDictionary *_adConfiguration;
    id <GADCustomEventBanner> _customEventBanner;
    CDUnknownBlockType _renderCompletionHandler;
    GADNBannerAd *_bannerAd;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _clickEventReceived
    GADNMediatedIntermission *_intermission;
}

- (void).cxx_destruct;
- (void)customEventBanner:(id)arg1 clickDidOccurInAd:(id)arg2;
- (void)customEventBannerWillLeaveApplication:(id)arg1;
- (void)customEventBannerDidDismissModal:(id)arg1;
- (void)customEventBannerWillDismissModal:(id)arg1;
- (void)customEventBannerWillPresentModal:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)customEventBannerWasClicked:(id)arg1;
- (void)customEventBanner:(id)arg1 didFailAd:(id)arg2;
- (void)customEventBanner:(id)arg1 didReceiveAd:(id)arg2;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)customEventCompletedLoadWithAdView:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

