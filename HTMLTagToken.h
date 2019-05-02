//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HTMLToken.h"

@class HTMLOrderedDictionary, NSMutableString, NSString;

@interface HTMLTagToken : HTMLToken
{
    NSMutableString *_tagName;
    HTMLOrderedDictionary *_attributes;
    _Bool _selfClosing;
}

@property(nonatomic, getter=isSelfClosing) _Bool selfClosing; // @synthesize selfClosing=_selfClosing;
@property(retain, nonatomic) HTMLOrderedDictionary *attributes; // @synthesize attributes=_attributes;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
- (void).cxx_destruct;
- (void)appendStringToTagName:(id)arg1;
- (id)initWithTagName:(id)arg1 attributes:(id)arg2;
- (id)initWithTagName:(id)arg1;

@end

