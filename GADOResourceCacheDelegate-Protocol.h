//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADOResourceCache, NSError;

@protocol GADOResourceCacheDelegate <NSObject>

@optional
- (void)resourceCache:(GADOResourceCache *)arg1 didFailCachingWithError:(NSError *)arg2;
- (void)resourceCacheDidSucceedCaching:(GADOResourceCache *)arg1;
- (void)resourceCacheDidReceiveData:(GADOResourceCache *)arg1;
- (void)resourceCacheDidReceiveResponse:(GADOResourceCache *)arg1;
- (void)resourceCacheDidStartCaching:(GADOResourceCache *)arg1;
@end

