//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADOGMSGHandler.h"

@class GADOSlot;

@interface GADOAdMetadataGMSGHandler : GADOGMSGHandler
{
    GADOSlot *_slot;
}

+ (id)actionBlockDictionary;
@property(nonatomic) __weak GADOSlot *slot; // @synthesize slot=_slot;
- (void).cxx_destruct;
- (void)adView:(id)arg1 didChangeAdMetadataNotification:(id)arg2;
- (id)initWithSlot:(id)arg1;
- (id)init;

@end

