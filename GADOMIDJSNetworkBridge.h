//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GADOMIDJSNetworkBridge : NSObject
{
    id <GADOMIDJSInvoker> _jsInvoker;
}

@property(nonatomic) __weak id <GADOMIDJSInvoker> jsInvoker; // @synthesize jsInvoker=_jsInvoker;
- (void).cxx_destruct;
- (unsigned long long)getGADOMIDError:(id)arg1;
- (void)injectJavaScriptFromURL:(id)arg1;
- (void)sendURL:(id)arg1 successCallback:(id)arg2 failureCallback:(id)arg3;
- (void)downloadJavaScriptResourceWithURL:(id)arg1 successCallback:(id)arg2 failureCallback:(id)arg3;
- (void)setupMethodsForJSObject:(id)arg1;

@end

