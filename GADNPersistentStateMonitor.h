//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADNObserverCollection, NSMutableDictionary;

@interface GADNPersistentStateMonitor : NSObject
{
    GADNObserverCollection *_observers;
    NSMutableDictionary *_state;
}

- (void).cxx_destruct;
- (void)saveState:(id)arg1;
- (id)savedState;
- (id)initWithMessageSource:(id)arg1;

@end

