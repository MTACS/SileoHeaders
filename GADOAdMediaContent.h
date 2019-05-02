//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADOMediaContentDisplaying.h"
#import "GADOSlotAdEventDelegate.h"
#import "GADOSlotAdLoadDelegate.h"
#import "GADOSlotDelegate.h"

@class GADOAdViewVideoController, GADONativeAdImage, GADORequest, GADOSlot, GADOVideoOptions, NSDictionary, NSString, UIImageView;

@interface GADOAdMediaContent : NSObject <GADOSlotAdEventDelegate, GADOSlotAdLoadDelegate, GADOSlotDelegate, GADOMediaContentDisplaying>
{
    NSDictionary *_configuration;
    GADORequest *_request;
    GADONativeAdImage *_mainImage;
    // Error parsing type: Ad, name: _mainImageAspectRatio
    UIImageView *_mainImageView;
    _Bool _hasLoaded;
    CDUnknownBlockType _completionHandler;
    GADOVideoOptions *_videoOptions;
    id <GADOAdMediaContentDelegate> _delegate;
    GADOSlot *_slot;
}

+ (id)videoSupportURL;
@property(readonly, nonatomic) GADOSlot *slot; // @synthesize slot=_slot;
@property(nonatomic) __weak id <GADOAdMediaContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)slot:(id)arg1 didLoadVideoWithSize:(struct CGSize)arg2;
- (struct CGRect)frameInInterface;
- (void)slot:(id)arg1 didFailToLoadAdContentWithError:(id)arg2;
- (void)slotFinishedLoadingAdContent:(id)arg1;
- (void)handleJavaScriptLoadedNotification:(id)arg1;
- (void)notifyVideoLoadCompletedWithError:(id)arg1;
@property(readonly, nonatomic) GADOAdViewVideoController *videoController;
- (double)aspectRatio;
- (id)mediaView;
- (void)setMainImage:(id)arg1;
- (void)loadVideoConfiguration;
- (void)loadRequest;
- (void)loadVideoWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)commonInit;
- (id)initWithRequest:(id)arg1 videoOptions:(id)arg2;
- (id)initWithVideoDictionary:(id)arg1 mainImage:(id)arg2 videoOptions:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

