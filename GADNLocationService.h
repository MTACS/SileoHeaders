//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLLocationManagerDelegate.h"

@class CLLocationManager, GADNLocation, GADNObserverCollection, NSObject<OS_dispatch_queue>, NSString;

@interface GADNLocationService : NSObject <CLLocationManagerDelegate>
{
    CLLocationManager *_locationManager;
    GADNLocation *_location;
    NSObject<OS_dispatch_queue> *_locationDataQueue;
    _Bool _featureEnabled;
    _Bool _publisherAuthorized;
    GADNObserverCollection *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)setPublisherAuthorized:(_Bool)arg1;
- (void)setFeatureEnabled:(_Bool)arg1;
- (void)updateLocation;
- (void)disable;
- (void)startUpdatingLocation;
@property(readonly, copy, nonatomic) GADNLocation *location;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

