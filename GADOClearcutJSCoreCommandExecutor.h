//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADOClearcutCommandExecuting.h"

@class JSContext, JSVirtualMachine, NSString;

@interface GADOClearcutJSCoreCommandExecutor : NSObject <GADOClearcutCommandExecuting>
{
    JSVirtualMachine *_virtualMachine;
    JSContext *_context;
}

- (void).cxx_destruct;
- (void)handleNetworkIOWithParameters:(id)arg1 successCallback:(id)arg2 failureCallback:(id)arg3;
- (void)asynchronouslyExecuteCommands:(id)arg1;
- (_Bool)isLoaded;
- (id)initWithScript:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

