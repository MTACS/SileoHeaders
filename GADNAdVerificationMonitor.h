//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADNAdVerificationReporter, GADNObserverCollection, GADNWebAdView;

@interface GADNAdVerificationMonitor : NSObject
{
    GADNObserverCollection *_observers;
    GADNWebAdView *_adView;
    GADNAdVerificationReporter *_adVerificationReporter;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _beginAdSessionExecuted
}

- (void).cxx_destruct;
- (void)trackExpandView:(id)arg1;
- (void)adDidMakeImpression;
- (void)beginAdSession;
- (void)dealloc;
- (id)initWithAd:(id)arg1 adView:(id)arg2 friendlyObstructionView:(id)arg3 mediaType:(long long)arg4;

@end

