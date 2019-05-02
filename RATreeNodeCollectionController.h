//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "RATreeNodeItemDataSource.h"

@class NSString, RATreeNodeController;

@interface RATreeNodeCollectionController : NSObject <RATreeNodeItemDataSource>
{
    id <RATreeNodeCollectionControllerDataSource> _dataSource;
    RATreeNodeController *_rootController;
}

@property(retain, nonatomic) RATreeNodeController *rootController; // @synthesize rootController=_rootController;
@property(nonatomic) __weak id <RATreeNodeCollectionControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (id)itemForTreeNodeItem:(id)arg1;
- (long long)numberOfChildrenForTreeNodeController:(id)arg1;
- (id)treeNodeController:(id)arg1 child:(long long)arg2;
- (id)controllersForNodes:(long long)arg1 inParentController:(id)arg2;
- (id)controllersForNodesWithIndexes:(id)arg1 inParentController:(id)arg2;
- (id)controllersAndIndexesForNodesWithIndexes:(id)arg1 inParentController:(id)arg2;
- (void)removeItemsAtIndexes:(id)arg1 inParent:(id)arg2 updates:(CDUnknownBlockType)arg3;
- (void)moveItemAtIndex:(long long)arg1 inParent:(id)arg2 toIndex:(long long)arg3 inParent:(id)arg4 updates:(CDUnknownBlockType)arg5;
- (void)insertItemsAtIndexes:(id)arg1 inParent:(id)arg2;
- (void)collapseRowForItem:(id)arg1 collapseChildren:(_Bool)arg2 updates:(CDUnknownBlockType)arg3;
- (void)expandRowForItem:(id)arg1 expandChildren:(_Bool)arg2 updates:(CDUnknownBlockType)arg3;
- (void)expandRowForItem:(id)arg1 updates:(CDUnknownBlockType)arg2;
- (id)childInParent:(id)arg1 atIndex:(long long)arg2;
- (long long)levelForItem:(id)arg1;
- (id)parentForItem:(id)arg1;
- (long long)lastVisibleDescendantIndexForItem:(id)arg1;
- (long long)indexForItem:(id)arg1;
- (id)treeNodeForIndex:(long long)arg1;
@property(readonly, nonatomic) long long numberOfVisibleRowsForItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
