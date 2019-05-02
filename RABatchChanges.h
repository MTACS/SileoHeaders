//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface RABatchChanges : NSObject
{
    NSMutableArray *_operationsStorage;
    long long _batchChangesCounter;
}

@property(nonatomic) long long batchChangesCounter; // @synthesize batchChangesCounter=_batchChangesCounter;
@property(retain, nonatomic) NSMutableArray *operationsStorage; // @synthesize operationsStorage=_operationsStorage;
- (void).cxx_destruct;
- (void)addBatchChangeEntity:(id)arg1;
- (void)moveItemWithDeletionBlock:(CDUnknownBlockType)arg1 fromLastIndex:(long long)arg2 additionBlock:(CDUnknownBlockType)arg3 toIndex:(long long)arg4;
- (void)collapseItemWithBlock:(CDUnknownBlockType)arg1 lastIndex:(long long)arg2;
- (void)deleteItemWithBlock:(CDUnknownBlockType)arg1 lastIndex:(long long)arg2;
- (void)expandItemWithBlock:(CDUnknownBlockType)arg1 atIndex:(long long)arg2;
- (void)insertItemWithBlock:(CDUnknownBlockType)arg1 atIndex:(long long)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (id)init;

@end

