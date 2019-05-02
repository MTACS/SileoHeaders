//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PackageButton.h"

#import "DFContinuousForceTouchDelegate.h"

@class NSObject<PackageQueueButtonDataProvider>, NSString, Package, PaymentPackageInfo, UIViewController;

@interface PackageQueueButton : PackageButton <DFContinuousForceTouchDelegate>
{
    _Bool _purchased;
    Package *_installedPackage;
    _Bool _shouldCheckPurchaseStatus;
    UIViewController *_viewControllerForPresentation;
    NSObject<PackageQueueButtonDataProvider> *_dataProvider;
    Package *_package;
    PaymentPackageInfo *_paymentInfo;
    NSString *_overrideTitle;
}

@property(nonatomic) _Bool shouldCheckPurchaseStatus; // @synthesize shouldCheckPurchaseStatus=_shouldCheckPurchaseStatus;
@property(retain, nonatomic) NSString *overrideTitle; // @synthesize overrideTitle=_overrideTitle;
@property(retain, nonatomic) PaymentPackageInfo *paymentInfo; // @synthesize paymentInfo=_paymentInfo;
@property(retain, nonatomic) Package *package; // @synthesize package=_package;
@property(nonatomic) __weak NSObject<PackageQueueButtonDataProvider> *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(nonatomic) __weak UIViewController *viewControllerForPresentation; // @synthesize viewControllerForPresentation=_viewControllerForPresentation;
- (void).cxx_destruct;
- (void)presentAlertForPaymentError:(id)arg1 withTitle:(id)arg2;
- (void)updateButtonTitle:(id)arg1;
- (void)authenticateWithProvider:(id)arg1;
- (void)initiatePurchaseWithProvider:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (id)previewActionItems;
- (void)updatePurchaseStatus;
- (void)updateInfo;
- (void)showDowngradePrompt:(id)arg1;
- (void)forceTouchRecognized:(id)arg1;
- (void)handleBtnLongPressGesture:(id)arg1;
- (void)setup;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
