//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GADNMediaContent, GADNObserverCollection;

@interface GADNMediaView : UIView
{
    id <GADNMediaContentDisplaying> _internalMediaContent;
    GADNMediaContent *_mediaContent;
    UIView *_mediaView;
    GADNObserverCollection *_observers;
}

- (void).cxx_destruct;
- (void)setInternalMediaContent:(id)arg1;
@property(retain, nonatomic) GADNMediaContent *mediaContent;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;

@end

