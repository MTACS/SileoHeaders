//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSSSelector.h"

@class NSString;

@interface CSSNthExpressionSelector : CSSSelector
{
    NSString *_className;
    struct CSSNthExpression _expression;
    CDUnknownBlockType _computeIndex;
}

+ (id)nthLastOfTypeSelector:(struct CSSNthExpression)arg1;
+ (id)nthOfTypeSelector:(struct CSSNthExpression)arg1;
+ (id)nthLastChildSelector:(struct CSSNthExpression)arg1;
+ (id)nthChildSelector:(struct CSSNthExpression)arg1;
@property(readonly, nonatomic) NSString *className; // @synthesize className=_className;
@property(readonly, nonatomic) struct CSSNthExpression expression; // @synthesize expression=_expression;
- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)acceptElement:(id)arg1;
- (id)initWithClassName:(id)arg1 expression:(struct CSSNthExpression)arg2 block:(CDUnknownBlockType)arg3;

@end

