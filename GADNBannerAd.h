//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADNAd.h"

@class GADNAdVideoController, NSString, UIView;

@interface GADNBannerAd : GADNAd
{
    NSString *_adNetworkClassName;
    UIView *_adView;
    GADNAdVideoController *_videoController;
}

@property(readonly, nonatomic) GADNAdVideoController *videoController; // @synthesize videoController=_videoController;
@property(readonly, nonatomic) UIView *adView; // @synthesize adView=_adView;
@property(readonly, nonatomic) NSString *adNetworkClassName; // @synthesize adNetworkClassName=_adNetworkClassName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContext:(id)arg1 adView:(id)arg2 adNetworkClassName:(id)arg3 videoController:(id)arg4;

@end

