//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADOAdView, GADOSafeBrowsingReporter, NSData, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSURL;

@interface GADOAdViewResourceCollection : NSObject
{
    NSMutableArray *_resources;
    NSMutableDictionary *_requestIndexForCanonicalURL;
    NSMutableDictionary *_requestIndicesForRedirectToURL;
    NSData *_imageData;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSURL *_mainDocumentURL;
    GADOSafeBrowsingReporter *_safeBrowsingReporter;
    NSMutableArray *_clickthroughURLs;
    GADOAdView *_adView;
}

+ (void)setGreedyCollectionEnabled:(_Bool)arg1;
@property(readonly, nonatomic) __weak GADOAdView *adView; // @synthesize adView=_adView;
- (void).cxx_destruct;
- (id)resourceDataForRequest:(id)arg1;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic, getter=isMalicious) _Bool malicious;
- (void)adViewDidFinishLayout;
- (void)addAutoClickRequest:(id)arg1;
- (void)addClickthroughURL:(id)arg1;
- (id)resourceForRequest:(id)arg1;
- (void)addResourceData:(id)arg1 forRequest:(id)arg2;
- (void)addURLResponse:(id)arg1 forRequest:(id)arg2;
- (void)addRequest:(id)arg1;
- (void)addResourceRequest:(id)arg1;
- (void)addParentForResource:(id)arg1;
- (id)referringResourceForRequest:(id)arg1;
- (id)redirectSourceForRequest:(id)arg1;
- (void)addRedirectDestinationForResource:(id)arg1;
- (void)updateSafeBrowsingReporter;
@property(copy) NSURL *mainDocumentURL;
- (id)init;
- (id)initWithAdView:(id)arg1;

@end

