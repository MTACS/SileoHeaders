//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADOCSIGMSGHandlerDelegate.h"

@class GADOAdView, NSDictionary, NSError, NSURLRequest;

@protocol GADOAdViewDelegate <GADOCSIGMSGHandlerDelegate>
- (void)adViewWebProcessDidTerminate:(GADOAdView *)arg1;

@optional
- (void)adViewDidMuteAd:(GADOAdView *)arg1;
- (void)adView:(GADOAdView *)arg1 didReceiveUnconfirmedClickWithClickInfo:(NSDictionary *)arg2;
- (void)adViewDidRecordClick:(GADOAdView *)arg1;
- (void)adViewDidRecordImpression:(GADOAdView *)arg1;
- (void)adView:(GADOAdView *)arg1 didLoadVideoWithSize:(struct CGSize)arg2;
- (void)adView:(GADOAdView *)arg1 contentSizeDidChange:(struct CGSize)arg2;
- (void)adView:(GADOAdView *)arg1 didMoveToPlacement:(id)arg2;
- (void)adView:(GADOAdView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)adViewDidFinishLoad:(GADOAdView *)arg1;
- (void)adViewDidStartLoad:(GADOAdView *)arg1;
- (_Bool)adView:(GADOAdView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end

