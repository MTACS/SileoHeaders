//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GADOInjectedSettings : NSObject
{
    NSMutableDictionary *_settings;
    NSObject<OS_dispatch_queue> *_lockQueue;
    id _foregroundObserver;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)refresh;
- (void)addEntriesFromDictionary:(id)arg1;
- (void)dealloc;
- (id)init;

@end

