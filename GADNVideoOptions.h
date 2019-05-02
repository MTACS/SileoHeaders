//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADNAdLoaderOptions.h"

@interface GADNVideoOptions : GADNAdLoaderOptions
{
    _Bool _startMuted;
    _Bool _customControlsRequested;
    _Bool _clickToExpandRequested;
}

@property(nonatomic) _Bool clickToExpandRequested; // @synthesize clickToExpandRequested=_clickToExpandRequested;
@property(nonatomic) _Bool customControlsRequested; // @synthesize customControlsRequested=_customControlsRequested;
@property(nonatomic) _Bool startMuted; // @synthesize startMuted=_startMuted;
- (id)requestParameters;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

