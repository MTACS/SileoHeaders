//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADOGMSGHandler.h"

@class GADOOpener;

@interface GADOOpenerGMSGHandler : GADOGMSGHandler
{
    GADOOpener *_opener;
}

+ (id)subActionBlockDictionary;
+ (id)actionBlockDictionary;
@property(retain, nonatomic) GADOOpener *opener; // @synthesize opener=_opener;
- (void).cxx_destruct;
- (_Bool)shouldUseCustomClose:(id)arg1;
- (unsigned long long)orientationFromParams:(id)arg1;
- (id)URLFromParams:(id)arg1 key:(id)arg2;
- (void)adView:(id)arg1 actionOpenAppLink:(id)arg2;
- (void)adView:(id)arg1 actionOpenApp:(id)arg2;
- (void)adView:(id)arg1 actionExpand:(id)arg2;
- (void)adView:(id)arg1 actionOpenWebApp:(id)arg2;
- (void)adView:(id)arg1 actionOpenInlineSafari:(id)arg2;
- (void)adView:(id)arg1 actionOpenBrowser:(id)arg2;
- (void)adView:(id)arg1 fetchInAppStore:(id)arg2;
- (void)adView:(id)arg1 actionOpenInAppStore:(id)arg2;
- (void)adView:(id)arg1 didReceiveOpenNotification:(id)arg2;
- (void)adView:(id)arg1 didReceiveUnconfirmedClickNotification:(id)arg2;
- (void)adView:(id)arg1 didReceiveClickNotification:(id)arg2;
- (id)initWithOpener:(id)arg1;

@end
