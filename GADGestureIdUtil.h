//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSUserDefaults;

@interface GADGestureIdUtil : NSObject
{
    NSUserDefaults *userDefaults_;
}

+ (_Bool)isOSAtLeastMajor:(int)arg1 minor:(int)arg2 bug:(int)arg3;
+ (void)getOSMajor:(int *)arg1 minor:(int *)arg2 bugFix:(int *)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=userDefaults_;
- (_Bool)deviceOptedOut;
- (id)deviceIdentifier;
- (id)osVersion;
- (void)dealloc;
- (id)init;

@end

