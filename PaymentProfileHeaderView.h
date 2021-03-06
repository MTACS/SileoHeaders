//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SettingsHeaderViewDisplayable.h"

@class NSDictionary, NSString, UIActivityIndicatorView, UILabel, UIStackView;

@interface PaymentProfileHeaderView : UIView <SettingsHeaderViewDisplayable>
{
    UIActivityIndicatorView *loadingView;
    UIStackView *stackView;
    UILabel *providerLabel;
    UILabel *nameLabel;
    UILabel *emailLabel;
    NSDictionary *_info;
    NSDictionary *_userInfo;
}

@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSDictionary *info; // @synthesize info=_info;
- (void).cxx_destruct;
- (void)updateDisplay;
- (_Bool)isLoading;
- (double)headerHeightForWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

