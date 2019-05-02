//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIColor;

@interface __LNChevronView : UIView
{
    UIView *_leftView;
    UIView *_rightView;
    long long _pendingState;
    long long _state;
    UIColor *_color;
    double _width;
    double _animationDuration;
}

@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)setState:(long long)arg1 animated:(_Bool)arg2;
- (void)setChevronState:(long long)arg1;
- (void)layoutSubviews;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
