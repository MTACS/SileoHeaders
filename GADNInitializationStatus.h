//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSDictionary;

@interface GADNInitializationStatus : NSObject <NSCopying>
{
    NSDictionary *_adapterStatusesByClassName;
}

@property(readonly, nonatomic) NSDictionary *adapterStatusesByClassName; // @synthesize adapterStatusesByClassName=_adapterStatusesByClassName;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)statusWithEntry:(id)arg1 forKey:(id)arg2;
- (id)initWithClassNames:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

