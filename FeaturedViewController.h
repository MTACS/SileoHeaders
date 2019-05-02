//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FeaturedViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class ANEMWebImageButton, FeaturedBaseView, NSString, UIActivityIndicatorView, UIScrollView;

@interface FeaturedViewController : UIViewController <UIScrollViewDelegate, FeaturedViewDelegate>
{
    ANEMWebImageButton *_profileButton;
    UIScrollView *_scrollView;
    UIActivityIndicatorView *_activityIndicatorView;
    FeaturedBaseView *_featuredView;
}

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)subviewHeightChanged;
- (void)scrollViewDidScroll:(id)arg1;
- (void)moveAndResizeProfileForHeight:(double)arg1;
- (void)showProfile:(id)arg1;
- (void)setupProfileButton;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)versionTooLow;
- (void)reloadData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
