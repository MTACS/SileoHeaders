//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADONativeAd.h"

#import "GADOLoadable.h"
#import "GADONativeAdMediaDisplaying.h"
#import "GADONativeAdSourceAttributing.h"
#import "GADOOverlayViewSource.h"

@class GADOAdMediaContent, GADOVideoController, NSString;

@interface GADOInstreamNativeAd : GADONativeAd <GADOLoadable, GADONativeAdMediaDisplaying, GADONativeAdSourceAttributing, GADOOverlayViewSource>
{
    GADOAdMediaContent *_mediaContent;
    GADOVideoController *_videoController;
}

+ (id)mediationConnectorForConfiguration:(id)arg1 networkConfiguration:(id)arg2;
+ (_Bool)canInitWithAdLoader:(id)arg1 error:(id *)arg2;
+ (id)requestParametersForAdLoader:(id)arg1;
+ (id)requiredDelegateProtocol;
+ (_Bool)canConvertToInstreamAd;
+ (id)loadableAdWithAdDictionary:(id)arg1 options:(id)arg2;
- (void).cxx_destruct;
- (id)videoController;
- (id)mediaContent;
- (_Bool)hasValidConfigurationForRequestParameters:(id)arg1;
- (void)adLoaderDidReceiveAd:(id)arg1;
- (void)loadAssetsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setRootViewController:(id)arg1;
- (void)setAdUnitID:(id)arg1;
- (id)overlayView;
- (id)adChoicesContentView;
- (id)initWithDictionary:(id)arg1 options:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

