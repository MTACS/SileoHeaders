//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADOVideoControlling.h"

@class GADOAdView, NSString;

@interface GADOAdViewVideoController : NSObject <GADOVideoControlling>
{
    GADOAdView *_adView;
    _Bool _videoOptionsCustomControlsRequested;
    _Bool _videoOptionsClickToExpandRequested;
    _Bool _videoMuted;
    _Bool _hasVideoContent;
    _Bool _customControlsEnabled;
    _Bool _clickToExpandEnabled;
    long long _videoPlaybackState;
    double _videoDuration;
    double _currentPlaybackTime;
    double _aspectRatio;
}

@property(nonatomic) _Bool clickToExpandEnabled; // @synthesize clickToExpandEnabled=_clickToExpandEnabled;
@property(nonatomic) _Bool customControlsEnabled; // @synthesize customControlsEnabled=_customControlsEnabled;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) _Bool hasVideoContent; // @synthesize hasVideoContent=_hasVideoContent;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) long long videoPlaybackState; // @synthesize videoPlaybackState=_videoPlaybackState;
- (void).cxx_destruct;
- (void)setInitialStateWithVideoOptions:(id)arg1;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setMute:(_Bool)arg1;
- (id)initWithAdView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

