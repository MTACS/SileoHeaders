//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GADNInAppPurchase : NSObject
{
    NSString *_productID;
    long long _quantity;
}

@property(readonly, nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(readonly, copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void).cxx_destruct;
- (void)reportPurchaseStatus:(long long)arg1;
- (id)init;

@end

