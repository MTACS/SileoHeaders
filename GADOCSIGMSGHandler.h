//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADOGMSGHandler.h"

@interface GADOCSIGMSGHandler : GADOGMSGHandler
{
    id <GADOCSIGMSGHandlerDelegate> _CSIDelegate;
}

+ (id)subActionBlockDictionary;
+ (id)actionBlockDictionary;
@property(nonatomic) __weak id <GADOCSIGMSGHandlerDelegate> CSIDelegate; // @synthesize CSIDelegate=_CSIDelegate;
- (void).cxx_destruct;
- (id)CSI;
- (void)adView:(id)arg1 didReceiveExtraAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveExperimentAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveTickAction:(id)arg2;
- (void)adView:(id)arg1 didReceiveCSINotification:(id)arg2;

@end

