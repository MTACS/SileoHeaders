//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADMediatedNativeAd.h"

@class GADONativeAdImage, NSArray, NSDecimalNumber, NSString, UIView;

@protocol GADMediatedNativeAppInstallAd <GADMediatedNativeAd>
- (NSString *)price;
- (NSString *)store;
- (NSDecimalNumber *)starRating;
- (NSString *)callToAction;
- (GADONativeAdImage *)icon;
- (NSString *)body;
- (NSArray *)images;
- (NSString *)headline;

@optional
- (_Bool)hasVideoContent;
- (UIView *)mediaView;
- (UIView *)adChoicesView;
@end
