//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface GADOShingleHashTuple : NSObject
{
    NSArray *_shingle;
    unsigned long long _hashValue;
}

@property(readonly, nonatomic) unsigned long long hashValue; // @synthesize hashValue=_hashValue;
@property(readonly, copy, nonatomic) NSArray *shingle; // @synthesize shingle=_shingle;
- (void).cxx_destruct;
- (id)init;
- (id)initWithShingle:(id)arg1 hashValue:(unsigned long long)arg2;

@end

