//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPanGestureRecognizer.h"

@class LNPopupInteractionPanGestureRecognizerDelegate;

@interface LNPopupInteractionPanGestureRecognizer : UIPanGestureRecognizer
{
    LNPopupInteractionPanGestureRecognizerDelegate *_actualDelegate;
}

- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 popupController:(id)arg3;

@end

