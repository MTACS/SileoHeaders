//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HTMLToken.h"

@class NSMutableString, NSString;

@interface HTMLCommentToken : HTMLToken
{
    NSMutableString *_data;
}

@property(copy, nonatomic) NSString *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)appendStringToData:(id)arg1;
- (id)initWithData:(id)arg1;

@end

