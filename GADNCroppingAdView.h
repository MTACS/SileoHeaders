//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADNView.h"

@class GADNObserverCollection, UIView;

@interface GADNCroppingAdView : GADNView
{
    UIView *_view;
    id _messageSource;
    GADNObserverCollection *_observers;
    struct CGSize _contentSize;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
- (void).cxx_destruct;
- (void)updateAdSizeFromNotification:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)mediationBannerInnerRefreshWithView:(id)arg1;
- (void)setUpSubview:(id)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1 size:(struct CGSize)arg2 context:(id)arg3 messageSource:(id)arg4;

@end

