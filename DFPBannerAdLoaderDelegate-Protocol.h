//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADAdLoaderDelegate.h"

@class DFPNBannerView, GADNAdLoader, NSArray;

@protocol DFPBannerAdLoaderDelegate <GADAdLoaderDelegate>
- (void)adLoader:(GADNAdLoader *)arg1 didReceiveDFPBannerView:(DFPNBannerView *)arg2;
- (NSArray *)validBannerSizesForAdLoader:(GADNAdLoader *)arg1;
@end

