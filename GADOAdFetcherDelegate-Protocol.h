//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADOAd, GADOAdFetcher, NSError;

@protocol GADOAdFetcherDelegate <NSObject>
- (void)adFetcher:(GADOAdFetcher *)arg1 didFailToFetchAd:(GADOAd *)arg2 withError:(NSError *)arg3 responseCode:(unsigned long long)arg4;
- (void)adFetcher:(GADOAdFetcher *)arg1 didFetchAd:(GADOAd *)arg2;
@end

