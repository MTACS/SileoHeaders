//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSFastEnumeration.h"

@class NSMutableArray;

@interface HTMLStackOfOpenElements : NSObject <NSFastEnumeration>
{
    NSMutableArray *_stack;
}

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)reverseObjectEnumerator;
- (id)enumerator;
- (_Bool)isEmpy;
- (unsigned long long)count;
- (id)furthestBlockAfterIndex:(unsigned long long)arg1;
- (id)hasElementInSelectScopeWithTagName:(id)arg1;
- (id)hasElementInButtonScopeWithTagName:(id)arg1;
- (id)hasElementInListItemScopeWithTagName:(id)arg1;
- (id)hasElementInTableScopeWithAnyOfTagNames:(id)arg1;
- (id)hasElementInTableScopeWithTagName:(id)arg1;
- (id)hasHeaderElementInScope;
- (id)hasElementInScopeWithTagName:(id)arg1;
- (void)popAll;
- (void)clearBackToTableRowContext;
- (void)clearBackToTableBodyContext;
- (void)clearBackToTableContext;
- (void)popElementsUntilTemplateElementPopped;
- (void)popElementsUntilElementPopped:(id)arg1;
- (void)popElementsUntilAnElementPoppedWithAnyOfTagNames:(id)arg1;
- (void)popElementsUntilElementPoppedWithTagName:(id)arg1;
- (void)popCurrentNode;
- (void)replaceElementAtIndex:(unsigned long long)arg1 withElement:(id)arg2;
- (void)insertElement:(id)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)containsElementWithTagName:(id)arg1;
- (_Bool)containsElement:(id)arg1;
- (void)removeElement:(id)arg1;
- (void)pushElement:(id)arg1;
- (unsigned long long)indexOfElement:(id)arg1;
- (void)setObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)lastNode;
- (id)firstNode;
- (id)currentNode;
- (id)init;

@end

