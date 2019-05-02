//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADNBannerView.h"

#import "GADNDynamicHeightSearchBannerViewDelegate.h"

@class GADNDynamicHeightSearchBannerView, NSString;

@interface GADNSearchBannerView : GADNBannerView <GADNDynamicHeightSearchBannerViewDelegate>
{
    GADNDynamicHeightSearchBannerView *_dynamicHeightAdView;
}

- (void).cxx_destruct;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerView:(id)arg1 didUpdateDesiredContentSize:(struct CGSize)arg2;
- (void)bannerView:(id)arg1 didReceiveLandingPageURL:(id)arg2;
- (void)bannerViewDidReceiveAd:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)setAdUnitID:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)loadRequest:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 adSize:(struct GADNAdSize)arg2;

// Remaining properties
@property(nonatomic) __weak id <GADAdSizeDelegate> adSizeDelegate; // @dynamic adSizeDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

