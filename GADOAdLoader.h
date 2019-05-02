//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADOAdMediationDelegate.h"
#import "GADOSlotAdLoadDelegate.h"
#import "GADOSlotAdResponseDelegate.h"
#import "GADOSlotDelegate.h"

@class GADOAdLoadResults, GADOAdLoaderConfiguration, GADOSlot, NSMutableArray, NSSet, NSString, UIViewController;

@interface GADOAdLoader : NSObject <GADOAdMediationDelegate, GADOSlotAdLoadDelegate, GADOSlotAdResponseDelegate, GADOSlotDelegate>
{
    GADOSlot *_slot;
    GADOAdLoadResults *_adLoadResults;
    NSSet *_adTypes;
    _Bool _loading;
    id <GADAdLoaderDelegate> _delegate;
    NSString *_adUnitID;
    GADOAdLoaderConfiguration *_adLoaderConfiguration;
    UIViewController *_rootViewController;
    NSMutableArray *_appEventAdLoaders;
    NSMutableArray *_adPreprocessors;
    NSMutableArray *_loadableAds;
}

@property(readonly, nonatomic) NSMutableArray *loadableAds; // @synthesize loadableAds=_loadableAds;
@property(readonly, nonatomic) NSMutableArray *adPreprocessors; // @synthesize adPreprocessors=_adPreprocessors;
@property(readonly, nonatomic) NSMutableArray *appEventAdLoaders; // @synthesize appEventAdLoaders=_appEventAdLoaders;
@property(readonly, nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) GADOAdLoaderConfiguration *adLoaderConfiguration; // @synthesize adLoaderConfiguration=_adLoaderConfiguration;
@property(readonly, nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(readonly, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(nonatomic) __weak id <GADAdLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;
- (void)slotFinishedLoadingAdContent:(id)arg1;
- (id)validAdSizes;
- (struct CGRect)frame;
- (struct CGRect)bounds;
- (void)loadAssetsForAd:(id)arg1 index:(long long)arg2;
- (void)slot:(id)arg1 willProcessMediatedAdResponse:(id)arg2;
- (void)preprocessAdJSON:(id)arg1 atIndex:(long long)arg2;
- (_Bool)slot:(id)arg1 shouldProcessAdResponse:(id)arg2 error:(id *)arg3;
- (void)finishLoading;
- (void)adDidFinishLoadingAssets:(id)arg1 isFinalResult:(_Bool)arg2;
- (void)handleFailedRequestWithRequestError:(id)arg1 isFinalResult:(_Bool)arg2;
- (void)loadRequest:(id)arg1;
- (id)init;
- (id)initWithAdUnitID:(id)arg1 rootViewController:(id)arg2 adTypes:(id)arg3 options:(id)arg4;
- (void)ad:(id)arg1 processMediatedAd:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)adLoaderConfigurationForAd:(id)arg1 networkConfiguration:(id)arg2;
- (id)mediationConnectorForConfiguration:(id)arg1 networkConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
