//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface GADOAdapterStatus : NSObject <NSCopying>
{
    NSString *_statusDescription;
    long long _state;
    double _latency;
}

@property(readonly, nonatomic) double latency; // @synthesize latency=_latency;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithState:(long long)arg1 latency:(double)arg2 description:(id)arg3;

@end

