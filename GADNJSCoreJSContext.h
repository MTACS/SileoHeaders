//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADNJSContext.h"

@class JSContext, JSVirtualMachine;

@interface GADNJSCoreJSContext : GADNJSContext
{
    JSVirtualMachine *_virtualMachine;
    JSContext *_JSContext;
}

+ (void)initialize;
@property(readonly, nonatomic) JSContext *JSContext; // @synthesize JSContext=_JSContext;
- (void).cxx_destruct;
- (id)functionWithName:(id)arg1;
- (void)asyncEvaluateFunction:(id)arg1 parameters:(id)arg2;
- (void)evaluateScript:(id)arg1;
- (id)initWithEventContext:(id)arg1;

@end

