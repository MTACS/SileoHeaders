//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionReusableView.h"

@class NSString, UIButton, UIImageView, UILabel, UISegmentedControl, UIToolbar;

@interface PackageListHeader : UICollectionReusableView
{
    UILabel *_label;
    UIToolbar *_toolbar;
    UIButton *_upgradeButton;
    UIButton *_sortButton;
    UIImageView *_separatorView;
    UIButton *_settingsButton;
    UISegmentedControl *_settingsControl;
    NSString *_actionText;
}

@property(retain, nonatomic) NSString *actionText; // @synthesize actionText=_actionText;
@property(readonly, nonatomic) UISegmentedControl *settingsControl; // @synthesize settingsControl=_settingsControl;
@property(readonly, nonatomic) UIButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(readonly, nonatomic) UIImageView *separatorView; // @synthesize separatorView=_separatorView;
@property(readonly, nonatomic) UIButton *sortButton; // @synthesize sortButton=_sortButton;
@property(readonly, nonatomic) UIButton *upgradeButton; // @synthesize upgradeButton=_upgradeButton;
@property(readonly, nonatomic) UILabel *label; // @synthesize label=_label;
- (void).cxx_destruct;
- (void)awakeFromNib;

@end

