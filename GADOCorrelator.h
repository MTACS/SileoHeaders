//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>;

@interface GADOCorrelator : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    unsigned int _correlationID;
}

- (void).cxx_destruct;
@property(readonly) unsigned int correlationID;
- (void)reset;
- (id)init;

@end

