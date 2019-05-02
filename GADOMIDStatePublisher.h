//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADOMIDAdSessionRegistry, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GADOMIDStatePublisher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_previousState;
    GADOMIDAdSessionRegistry *_adSessionRegistry;
}

@property(readonly, nonatomic) GADOMIDAdSessionRegistry *adSessionRegistry; // @synthesize adSessionRegistry=_adSessionRegistry;
@property(readonly, nonatomic) NSMutableDictionary *previousState; // @synthesize previousState=_previousState;
- (void).cxx_destruct;
- (void)cleanupCache;
- (void)publishEmptyStateCommand:(id)arg1 toSessions:(id)arg2 timestamp:(double)arg3;
- (void)publishNativeViewStateCommand:(id)arg1 toSessions:(id)arg2 timestamp:(double)arg3;
- (void)publishEmptyStateToSessions:(id)arg1 timestamp:(double)arg2;
- (void)publishState:(id)arg1 toSessions:(id)arg2 timestamp:(double)arg3;
- (id)initWithAdSessionRegistry:(id)arg1;

@end

