//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GADOAdMediaContentDelegate.h"

@class GADOMediaContent, NSString;

@interface GADOMediaView : UIView <GADOAdMediaContentDelegate>
{
    UIView *_mediaView;
    GADOMediaContent *_mediaContent;
    id <GADOMediaContentDisplaying> _internalMediaContent;
}

- (void).cxx_destruct;
- (void)mediaContent:(id)arg1 didLoadVideoWithSize:(struct CGSize)arg2;
- (void)didMoveToWindow;
- (void)setInternalMediaContent:(id)arg1;
@property(retain, nonatomic) GADOMediaContent *mediaContent;
- (struct CGSize)intrinsicContentSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

