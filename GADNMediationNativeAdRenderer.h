//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADNMediatedAdRenderer.h"

#import "GADMAdNetworkConnector.h"

@class GADNInternalNativeAd, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface GADNMediationNativeAdRenderer : GADNMediatedAdRenderer <GADMAdNetworkConnector>
{
    CDUnknownBlockType _renderCompletionHandler;
    GADNInternalNativeAd *_internalNativeAd;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _adLoadCompleted
}

- (void).cxx_destruct;
- (void)adapter:(id)arg1 didFailAd:(id)arg2;
- (void)adapter:(id)arg1 didReceiveMediatedUnifiedNativeAd:(id)arg2;
- (void)adapter:(id)arg1 didReceiveMediatedNativeAd:(id)arg2;
- (void)didReceiveNativeAd:(id)arg1 fromAdapter:(id)arg2;
- (id)viewControllerForPresentingModalView;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, nonatomic) NSNumber *childDirectedTreatment;
@property(readonly, copy, nonatomic) NSDictionary *credentials;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *maxAdContentRating;
@property(readonly, nonatomic) id <GADAdNetworkExtras> networkExtras;
@property(readonly, copy, nonatomic) NSString *publisherId;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool testMode;
@property(readonly, nonatomic) NSNumber *underAgeOfConsent;
@property(readonly, nonatomic) NSDate *userBirthday;
@property(readonly, nonatomic) long long userGender;
@property(readonly, nonatomic) _Bool userHasLocation;
@property(readonly, nonatomic) NSArray *userKeywords;
@property(readonly, nonatomic) double userLatitude;
@property(readonly, nonatomic) double userLocationAccuracyInMeters;
@property(readonly, nonatomic) NSString *userLocationDescription;
@property(readonly, nonatomic) double userLongitude;

@end

