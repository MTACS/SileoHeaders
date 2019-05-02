//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSObject<DepictionViewDelegate>, UIViewController;

@interface DepictionBaseView : UIView
{
    NSObject<DepictionViewDelegate> *_delegate;
    UIViewController *_parentViewController;
}

+ (id)viewWithDictionary:(id)arg1 viewController:(id)arg2 tintColor:(id)arg3;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak NSObject<DepictionViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (double)depictionHeightForWidth:(double)arg1;
- (void)subviewHeightChanged;
- (id)initWithDictionary:(id)arg1 viewController:(id)arg2 tintColor:(id)arg3;

@end
