//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HTMLNodeFilter.h"

@class NSString;

@interface HTMLNodeFilterBlock : NSObject <HTMLNodeFilter>
{
    CDUnknownBlockType _block;
}

+ (id)filterWithBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (unsigned short)acceptNode:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

