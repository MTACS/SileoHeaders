//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPVolumeView, NSArray, NSDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, UISlider;

@interface GADODevice : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    long long _statusBarOrientation;
    unsigned long long _mainWindowSupportedInterfaceOrientations;
    unsigned long long _supportedInterfaceOrientationsForKeyWindow;
    struct CGRect _standardizedMainScreenPortraitBounds;
    struct CGRect _standardizedMainScreenLandscapeBounds;
    _Bool _userInterfaceIdiomIsPhone;
    unsigned long long _bookstores;
    float _audioVolume;
    NSArray *_audioRoutePortNames;
    // Error parsing type: AB, name: _canMakePayments
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasCalledCanMakePayments
    NSDictionary *_infoPlist;
    _Bool _hasCachedStaticParameters;
    _Bool _hasCachedAdditionalStaticParameters;
    struct CGSize _standardizedOrientedKeyWindowSize;
    MPVolumeView *_volumeView;
    UISlider *_volumeSliderView;
    NSString *_pseudonymousIdentifier;
    id <NSObject> _orientationChangeObserver;
    NSString *_deviceModel;
    NSString *_systemVersion;
    double _mainScreenDensity;
    _Bool _isOtherAudioPlaying;
    NSNumber *_shouldSilenceAudioValue;
    _Bool _canText;
    _Bool _canMakePhoneCalls;
    CDStruct_f6aba300 _operatingSystemVersion;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSNumber *shouldSilenceAudioValue; // @synthesize shouldSilenceAudioValue=_shouldSilenceAudioValue;
@property(readonly, nonatomic) _Bool isOtherAudioPlaying; // @synthesize isOtherAudioPlaying=_isOtherAudioPlaying;
@property(readonly, nonatomic) _Bool canMakePhoneCalls; // @synthesize canMakePhoneCalls=_canMakePhoneCalls;
@property(readonly, nonatomic) _Bool canText; // @synthesize canText=_canText;
@property(readonly, nonatomic) CDStruct_f6aba300 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
- (void).cxx_destruct;
- (_Bool)isSimulator;
@property(readonly, copy, nonatomic) NSArray *audioRoutePortNames;
@property(readonly, nonatomic) float audioVolume;
@property(readonly, nonatomic) struct CGSize standardizedPortraitKeyWindowSize;
@property(readonly, nonatomic) struct CGSize standardizedOrientedKeyWindowSize;
@property(readonly, nonatomic) struct CGRect standardizedOrientedApplicationFrame;
@property(readonly, nonatomic) struct CGRect standardizedOrientedScreenBounds;
@property(readonly, nonatomic) struct CGRect standardizedLandscapeScreenBounds;
@property(readonly, nonatomic) struct CGRect standardizedPortraitScreenBounds;
@property(readonly, nonatomic) _Bool orientationLandscape;
@property(readonly, nonatomic) NSString *locale;
@property(readonly, nonatomic) double mainScreenDensity;
@property(readonly, nonatomic) NSString *deviceSubmodel;
@property(readonly, nonatomic) NSString *deviceModel;
- (id)deviceIdentifier;
- (id)rawDeviceIdentifier;
- (id)pseudonymousIdentifier;
- (void)clearPseudonymousIdentifier;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) _Bool jailbroken;
@property(readonly, copy, nonatomic) NSString *limitAdTrackingString;
@property(readonly, nonatomic) _Bool limitAdTracking;
- (id)canOpenURLs:(id)arg1;
- (_Bool)OSIsSupported;
- (_Bool)isOSAtLeastMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3;
- (void)updateOperatingSystemVersionProperties;
- (void)updateCanMakePayments;
- (id)baseSDKVersion;
- (id)parameters;
- (void)updateAudioPortNames;
- (void)updateAudioVolume;
- (void)updateAudio;
- (void)updateOrientedKeyWindowSize;
- (void)updateBookstores;
- (void)updateOrientation;
- (void)updateDynamicParameters;
- (void)cacheAdditionalStaticParameters;
- (void)cacheStaticParameters;
- (void)dealloc;
- (id)init;

@end

