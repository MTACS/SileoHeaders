//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class LNPopupCloseButton, UIPanGestureRecognizer;

@interface LNPopupContentView : UIView
{
    _Bool _popupCloseButtonAutomaticallyUnobstructsTopBars;
    UIPanGestureRecognizer *_popupInteractionGestureRecognizer;
    unsigned long long _popupCloseButtonStyle;
    LNPopupCloseButton *_popupCloseButton;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) _Bool popupCloseButtonAutomaticallyUnobstructsTopBars; // @synthesize popupCloseButtonAutomaticallyUnobstructsTopBars=_popupCloseButtonAutomaticallyUnobstructsTopBars;
@property(retain, nonatomic) LNPopupCloseButton *popupCloseButton; // @synthesize popupCloseButton=_popupCloseButton;
@property(nonatomic) unsigned long long popupCloseButtonStyle; // @synthesize popupCloseButtonStyle=_popupCloseButtonStyle;
@property(retain, nonatomic) UIPanGestureRecognizer *popupInteractionGestureRecognizer; // @synthesize popupInteractionGestureRecognizer=_popupInteractionGestureRecognizer;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
