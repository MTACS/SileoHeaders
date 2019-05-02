//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURL, NSURLConnection, NSURLRequest;

@interface GADOResourceCache : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSURLConnection *_connection;
    NSURLRequest *_request;
    NSString *_cacheID;
    _Bool _removeFileOnDealloc;
    double _cachingStartTimeIntervalSinceBoot;
    id <GADOResourceCacheDelegate> _delegate;
    NSURL *_fileURL;
    NSMutableDictionary *_responseHeaders;
    long long _cacheContentSize;
    long long _maxBytes;
    _Bool _responseHeadersReceived;
    _Bool _started;
    _Bool _completed;
    NSString *_contentType;
    long long _contentLength;
    _Bool _valid;
}

@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(readonly, copy, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSString *cacheID; // @synthesize cacheID=_cacheID;
- (void).cxx_destruct;
@property(readonly) _Bool valid;
@property long long maxBytes;
@property(readonly) long long contentLength;
@property(readonly, copy) NSString *contentType;
@property(readonly) _Bool completed;
@property(readonly) _Bool responseHeadersReceived;
@property(readonly) _Bool started;
@property __weak id <GADOResourceCacheDelegate> delegate;
@property(readonly, copy) NSDictionary *responseHeaders;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)appendDataToFile:(id)arg1;
- (void)addResponseHeaders:(id)arg1;
- (void)cachingDidCompleteWithError:(id)arg1;
- (id)dataWithRange:(struct _NSRange)arg1 error:(id *)arg2;
- (double)networkSpeedInBytesPerSecond;
- (long long)cachedContentSize;
- (void)cancelWithError:(id)arg1;
- (void)start;
- (void)dealloc;
- (id)init;
- (id)initWithURLRequest:(id)arg1 cacheID:(id)arg2 error:(id *)arg3;
- (id)initWithRequest:(id)arg1 fileURL:(id)arg2 contentType:(id)arg3 contentLength:(long long)arg4 removeFileOnDealloc:(_Bool)arg5;
- (id)initWithRequest:(id)arg1 fileURL:(id)arg2 removeFileOnDealloc:(_Bool)arg3;
- (void)commonInitWithRequest:(id)arg1 fileURL:(id)arg2 removeFileOnDealloc:(_Bool)arg3;

@end

