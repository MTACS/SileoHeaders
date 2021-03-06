//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FeaturedBaseView.h"

#import "PackageQueueButtonDataProvider.h"
#import "UIViewControllerPreviewingDelegate.h"

@class NSLayoutConstraint, NSString, PackageIconView, PackageQueueButton, UILabel, UIView;

@interface FeaturedPackageView : FeaturedBaseView <PackageQueueButtonDataProvider, UIViewControllerPreviewingDelegate>
{
    PackageIconView *_imageView;
    UILabel *_titleLabel;
    UILabel *_authorLabel;
    UILabel *_versionLabel;
    NSString *_repoName;
    PackageQueueButton *_packageButton;
    NSString *_package;
    UIView *_separatorView;
    NSLayoutConstraint *_separatorHeightConstraint;
    _Bool _isUpdatingPurchaseStatus;
    _Bool _highlighted;
}

@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (void)updatePurchaseStatus;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)openDepiction:(id)arg1;
- (_Bool)accessibilityActivate;
- (double)depictionHeightForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (id)initWithDictionary:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

