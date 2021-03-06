//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HTMLToken : NSObject
{
    unsigned long long _type;
}

@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)asParseError;
- (id)asCharacterToken;
- (id)asCommentToken;
- (id)asEndTagToken;
- (id)asStartTagToken;
- (id)asTagToken;
- (id)asDoctypeToken;
- (_Bool)isParseError;
- (_Bool)isEOFToken;
- (_Bool)isCharacterToken;
- (_Bool)isCommentToken;
- (_Bool)isEndTagToken;
- (_Bool)isStartTagToken;
- (_Bool)isDoctypeToken;

@end

