//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GADOMIDSDK : NSObject
{
    _Bool _active;
}

+ (id)sharedInstance;
+ (long long)majorVersionFrom:(id)arg1;
+ (_Bool)isCompatibleWithGADOMIDAPIVersion:(id)arg1;
+ (id)versionString;
@property(readonly, getter=isActive) _Bool active; // @synthesize active=_active;
- (_Bool)activate;
- (_Bool)activateWithGADOMIDAPIVersion:(id)arg1 error:(id *)arg2;

@end

