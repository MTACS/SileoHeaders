//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADMediationAdapter.h"

@class GADNRTBRequestParameters;

@protocol GADRTBAdapter <GADMediationAdapter>
- (void)collectSignalsForRequestParameters:(GADNRTBRequestParameters *)arg1 completionHandler:(void (^)(NSString *, NSError *))arg2;
@end

