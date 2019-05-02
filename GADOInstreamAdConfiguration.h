//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADORequest, NSString;

@interface GADOInstreamAdConfiguration : NSObject
{
    GADORequest *_request;
    NSString *_adUnitID;
    long long _videoAspectRatio;
}

@property(readonly, nonatomic) long long videoAspectRatio; // @synthesize videoAspectRatio=_videoAspectRatio;
@property(readonly, copy, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(copy, nonatomic) GADORequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (id)initWithAdUnitID:(id)arg1 videoAspectRatio:(long long)arg2;

@end

