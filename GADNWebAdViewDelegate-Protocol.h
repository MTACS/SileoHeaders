//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADNWebAdView, NSString;

@protocol GADNWebAdViewDelegate <NSObject>
- (void)adView:(GADNWebAdView *)arg1 runJavaScriptTextInputPanelWithTitle:(NSString *)arg2 defaultText:(NSString *)arg3 prompt:(NSString *)arg4 completionHandler:(void (^)(NSString *))arg5;
- (void)adView:(GADNWebAdView *)arg1 runJavaScriptConfirmPanelWithTitle:(NSString *)arg2 message:(NSString *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (void)adView:(GADNWebAdView *)arg1 runJavaScriptAlertPanelWithTitle:(NSString *)arg2 message:(NSString *)arg3 completionHandler:(void (^)(void))arg4;
@end

