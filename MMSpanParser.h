//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMElement, MMHTMLParser, NSMutableArray;

@interface MMSpanParser : NSObject
{
    _Bool _parseEm;
    _Bool _parseImages;
    _Bool _parseLinks;
    _Bool _parseStrong;
    unsigned long long _extensions;
    MMHTMLParser *_htmlParser;
    NSMutableArray *_elements;
    NSMutableArray *_openElements;
    MMElement *_blockElement;
}

@property(nonatomic) _Bool parseStrong; // @synthesize parseStrong=_parseStrong;
@property(nonatomic) _Bool parseLinks; // @synthesize parseLinks=_parseLinks;
@property(nonatomic) _Bool parseImages; // @synthesize parseImages=_parseImages;
@property(nonatomic) _Bool parseEm; // @synthesize parseEm=_parseEm;
@property(retain, nonatomic) MMElement *blockElement; // @synthesize blockElement=_blockElement;
@property(retain, nonatomic) NSMutableArray *openElements; // @synthesize openElements=_openElements;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(readonly, nonatomic) MMHTMLParser *htmlParser; // @synthesize htmlParser=_htmlParser;
@property(readonly, nonatomic) unsigned long long extensions; // @synthesize extensions=_extensions;
- (void).cxx_destruct;
- (id)_stringWithBackslashEscapesRemoved:(id)arg1;
- (id)_parseLeftAngleBracketWithScanner:(id)arg1;
- (id)_parseBackslashWithScanner:(id)arg1;
- (id)_parseAmpersandWithScanner:(id)arg1;
- (id)_parseImageWithScanner:(id)arg1;
- (id)_parseLinkWithScanner:(id)arg1;
- (id)_parseReferenceLinkWithScanner:(id)arg1;
- (id)_parseInlineLinkWithScanner:(id)arg1;
- (id)_parseLinkTextBodyWithScanner:(id)arg1;
- (id)_parseAutomaticEmailLinkWithScanner:(id)arg1;
- (id)_parseAutomaticLinkWithScanner:(id)arg1;
- (id)_parseLineBreakWithScanner:(id)arg1;
- (id)_parseCodeSpanWithScanner:(id)arg1;
- (id)_parseEmAndStrongWithScanner:(id)arg1;
- (id)_parseStrikethroughWithScanner:(id)arg1;
- (id)_parseAutolinkWWWURLWithScanner:(id)arg1;
- (id)_parseAutolinkURLWithScanner:(id)arg1;
- (id)_parseAutolinkEmailAddressWithScanner:(id)arg1;
- (void)_parseAutolinkPathWithScanner:(id)arg1;
- (_Bool)_parseAutolinkDomainWithScanner:(id)arg1;
- (id)_parseNextElementWithScanner:(id)arg1;
- (id)_parseWithScanner:(id)arg1 untilTestPasses:(CDUnknownBlockType)arg2;
- (id)parseSpansInTableColumns:(id)arg1 withScanner:(id)arg2;
- (id)parseSpansInBlockElement:(id)arg1 withScanner:(id)arg2;
- (id)initWithExtensions:(unsigned long long)arg1;

@end

