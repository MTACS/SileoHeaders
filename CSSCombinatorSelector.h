//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSSSelector.h"

@interface CSSCombinatorSelector : CSSSelector
{
    CSSSelector *_selector;
}

+ (id)generalSiblingCombinator:(id)arg1;
+ (id)adjacentSiblingCombinator:(id)arg1;
+ (id)descendantOfElementCombinator:(id)arg1;
+ (id)childOfElementCombinator:(id)arg1;
@property(readonly, nonatomic) CSSSelector *selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (id)initWithSelector:(id)arg1;

@end

