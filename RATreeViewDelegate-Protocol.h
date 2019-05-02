//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, RATreeView, UITableViewCell;

@protocol RATreeViewDelegate <NSObject>

@optional
- (void)treeView:(RATreeView *)arg1 didUnhighlightRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 didHighlightRowForItem:(id)arg2;
- (_Bool)treeView:(RATreeView *)arg1 shouldHighlightRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 performAction:(SEL)arg2 forRowForItem:(id)arg3 withSender:(id)arg4;
- (_Bool)treeView:(RATreeView *)arg1 canPerformAction:(SEL)arg2 forRowForItem:(id)arg3 withSender:(id)arg4;
- (_Bool)treeView:(RATreeView *)arg1 shouldShowMenuForRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 didEndDisplayingCell:(UITableViewCell *)arg2 forItem:(id)arg3;
- (NSArray *)treeView:(RATreeView *)arg1 editActionsForItem:(id)arg2;
- (_Bool)treeView:(RATreeView *)arg1 shouldIndentWhileEditingRowForItem:(id)arg2;
- (NSString *)treeView:(RATreeView *)arg1 titleForDeleteConfirmationButtonForRowForItem:(id)arg2;
- (long long)treeView:(RATreeView *)arg1 editingStyleForRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 didEndEditingRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 willBeginEditingRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 didDeselectRowForItem:(id)arg2;
- (id)treeView:(RATreeView *)arg1 willDeselectRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 didSelectRowForItem:(id)arg2;
- (id)treeView:(RATreeView *)arg1 willSelectRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 didCollapseRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 didExpandRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 willCollapseRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 willExpandRowForItem:(id)arg2;
- (_Bool)treeView:(RATreeView *)arg1 shouldCollapaseRowForItem:(id)arg2;
- (_Bool)treeView:(RATreeView *)arg1 shouldExpandRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 accessoryButtonTappedForRowForItem:(id)arg2;
- (void)treeView:(RATreeView *)arg1 willDisplayCell:(UITableViewCell *)arg2 forItem:(id)arg3;
- (long long)treeView:(RATreeView *)arg1 indentationLevelForRowForItem:(id)arg2;
- (double)treeView:(RATreeView *)arg1 estimatedHeightForRowForItem:(id)arg2;
- (double)treeView:(RATreeView *)arg1 heightForRowForItem:(id)arg2;
@end
