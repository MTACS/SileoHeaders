//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface GADNAppOpenAdView : UIView
{
    NSString *_adUnitID;
    id <GADAppOpenAdViewDelegate> _delegate;
    long long _orientation;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) __weak id <GADAppOpenAdViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void).cxx_destruct;
- (void)loadRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

