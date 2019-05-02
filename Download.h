//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURLSessionDownloadTask, Package;

@interface Download : NSObject
{
    _Bool _success;
    _Bool _queued;
    Package *_package;
    NSURLSessionDownloadTask *_task;
    double _progress;
    NSString *_failureReason;
    unsigned long long _totalBytesWritten;
    unsigned long long _totalBytesExpectedToWrite;
}

@property(nonatomic) _Bool queued; // @synthesize queued=_queued;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(nonatomic) unsigned long long totalBytesExpectedToWrite; // @synthesize totalBytesExpectedToWrite=_totalBytesExpectedToWrite;
@property(nonatomic) unsigned long long totalBytesWritten; // @synthesize totalBytesWritten=_totalBytesWritten;
@property(retain, nonatomic) NSString *failureReason; // @synthesize failureReason=_failureReason;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(retain, nonatomic) NSURLSessionDownloadTask *task; // @synthesize task=_task;
@property(retain, nonatomic) Package *package; // @synthesize package=_package;
- (void).cxx_destruct;

@end
