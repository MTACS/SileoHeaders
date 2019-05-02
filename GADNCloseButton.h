//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@interface GADNCloseButton : UIButton
{
    _Bool _useCustomCloseImage;
    _Bool _enabledOnCustomClose;
    long long _preferredPosition;
    struct CGSize _preferredTapSize;
}

@property(nonatomic) struct CGSize preferredTapSize; // @synthesize preferredTapSize=_preferredTapSize;
@property(nonatomic) long long preferredPosition; // @synthesize preferredPosition=_preferredPosition;
@property(nonatomic) _Bool enabledOnCustomClose; // @synthesize enabledOnCustomClose=_enabledOnCustomClose;
@property(nonatomic) _Bool useCustomCloseImage; // @synthesize useCustomCloseImage=_useCustomCloseImage;
- (void)updateImageAndEnabled;
- (struct CGSize)intrinsicContentSize;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

