//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PaymentManager : NSObject
{
    NSMutableDictionary *_paymentProvidersForURL;
    NSMutableDictionary *_paymentProvidersForEndpoint;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)getPaymentProviderForEndpoint:(id)arg1;
- (void)getPaymentProviderForRepo:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getAllAvailablePaymentProvidersWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;

@end

