//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADOBannerView.h"

#import "DFPOCustomRenderedAdEventHandler.h"
#import "GADOLoadable.h"

@class GADOCorrelator, GADOVideoController, NSArray, NSString;

@interface DFPOBannerView : GADOBannerView <GADOLoadable, DFPOCustomRenderedAdEventHandler>
{
    unsigned int _previousCorrelationID;
    id <GADAppEventDelegate> _appEventDelegate;
    NSArray *_validAdSizes;
    id <DFPCustomRenderedBannerViewDelegate> _customRenderedBannerViewDelegate;
}

+ (id)mediationConnectorForConfiguration:(id)arg1 networkConfiguration:(id)arg2;
+ (_Bool)canInitWithAdLoader:(id)arg1 error:(id *)arg2;
+ (id)requestParametersForAdLoader:(id)arg1;
+ (_Bool)canConvertToInstreamAd;
+ (id)requiredDelegateProtocol;
+ (id)loadableAdWithAdDictionary:(id)arg1 options:(id)arg2;
@property(nonatomic) __weak id <DFPCustomRenderedBannerViewDelegate> customRenderedBannerViewDelegate; // @synthesize customRenderedBannerViewDelegate=_customRenderedBannerViewDelegate;
@property(copy, nonatomic) NSArray *validAdSizes; // @synthesize validAdSizes=_validAdSizes;
@property(nonatomic) __weak id <GADAppEventDelegate> appEventDelegate; // @synthesize appEventDelegate=_appEventDelegate;
- (void).cxx_destruct;
- (void)slot:(id)arg1 willLoadAdWithRequest:(id)arg2;
- (_Bool)slotShouldPreemptInProgressRequest:(id)arg1;
- (_Bool)slot:(id)arg1 notifyPublisherToRenderCustomRenderingAd:(id)arg2 error:(id *)arg3;
- (void)slot:(id)arg1 didReceiveAppEvent:(id)arg2 withInfo:(id)arg3;
- (void)slot:(id)arg1 willResizeToAdSize:(struct GADOAdSize)arg2;
- (void)setAdOptions:(id)arg1;
- (void)setValidAdSizesWithSizes:(struct GADOAdSize *)arg1;
- (void)recordImpression;
- (void)resize:(struct GADOAdSize)arg1;
@property(nonatomic) _Bool enableManualImpressions;
@property(retain, nonatomic) GADOCorrelator *correlator;
- (void)adLoaderDidReceiveAd:(id)arg1;
- (void)loadAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)hasValidConfigurationForRequestParameters:(id)arg1;
- (void)finishedRenderingAdView:(id)arg1;
- (void)recordCustomAdImpression;
- (void)recordClick;

// Remaining properties
@property(nonatomic) __weak id <GADAdSizeDelegate> adSizeDelegate; // @dynamic adSizeDelegate;
@property(copy, nonatomic) NSString *adUnitID; // @dynamic adUnitID;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) GADOVideoController *videoController; // @dynamic videoController;

@end

