//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADMAdNetworkConnector, GADOMediationCredentials, GADOSlot, NSNumber, NSString, UIViewController;

@interface GADOMediationAdConfiguration : NSObject
{
    GADMAdNetworkConnector *_connector;
    GADOMediationCredentials *_credentials;
    GADOSlot *_slot;
    UIViewController *_rootViewController;
}

@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak GADOSlot *slot; // @synthesize slot=_slot;
@property(readonly, nonatomic) GADOMediationCredentials *credentials; // @synthesize credentials=_credentials;
- (void).cxx_destruct;
@property(readonly, nonatomic) double userLocationAccuracyInMeters;
@property(readonly, nonatomic) double userLongitude;
@property(readonly, nonatomic) double userLatitude;
@property(readonly, nonatomic) _Bool hasUserLocation;
- (id)userLocation;
@property(readonly, nonatomic) _Bool isTestRequest;
@property(readonly, nonatomic) NSNumber *childDirectedTreatment;
@property(readonly, nonatomic) UIViewController *topViewController;
@property(readonly, nonatomic) id <GADAdNetworkExtras> extras;
@property(readonly, nonatomic) NSString *bidResponse;
- (id)init;
- (id)initWithConnector:(id)arg1 credentials:(id)arg2;

@end
