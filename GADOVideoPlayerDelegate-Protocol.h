//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AVPlayer, GADOVideoPlayer, NSURL;

@protocol GADOVideoPlayerDelegate <NSObject>
- (void)player:(GADOVideoPlayer *)arg1 didLoadURL:(NSURL *)arg2 withAVPlayer:(AVPlayer *)arg3;
@end
