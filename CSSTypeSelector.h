//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CSSSelector.h"

@class NSString;

@interface CSSTypeSelector : CSSSelector
{
    NSString *_type;
}

+ (id)universalSelector;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)debugDescription;
- (_Bool)acceptElement:(id)arg1;
- (id)initWithType:(id)arg1;

@end

