//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADNNativeAd.h"

@class GADNNativeAdImage, GADNVideoController, NSArray, NSDecimalNumber, NSString;

@interface GADNNativeAppInstallAd : GADNNativeAd
{
    GADNVideoController *_videoController;
}

- (void).cxx_destruct;
- (void)unregisterAdView;
- (void)updateMediaView:(id)arg1;
- (void)updateAdChoicesView:(id)arg1;
- (void)registerAdView:(id)arg1 clickableAssetViews:(id)arg2 nonclickableAssetViews:(id)arg3;
- (void)registerAdView:(id)arg1 assetViews:(id)arg2;
- (_Bool)recordImpressionWithData:(id)arg1;
- (void)reportTouchEventWithData:(id)arg1;
- (void)performClickWithData:(id)arg1;
- (id)adType;
- (id)adChoicesIcon;
@property(readonly, nonatomic) GADNVideoController *videoController;
@property(readonly, copy, nonatomic) NSDecimalNumber *starRating;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, copy, nonatomic) NSString *price;
@property(readonly, copy, nonatomic) NSString *store;
@property(readonly, copy, nonatomic) NSString *body;
@property(readonly, nonatomic) GADNNativeAdImage *icon;
@property(readonly, copy, nonatomic) NSString *callToAction;
@property(readonly, copy, nonatomic) NSString *headline;

@end

