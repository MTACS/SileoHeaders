//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UILabel;

@interface DepictionTabControl : UIView
{
    UILabel *_tabLabel;
    NSString *_text;
    _Bool _highlighted;
}

@property(nonatomic) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)viewTapped:(id)arg1;
- (_Bool)accessibilityActivate;
- (double)textWidth;
- (id)initWithText:(id)arg1;

@end
