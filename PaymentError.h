//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface PaymentError : NSObject
{
    _Bool _shouldInvalidate;
    NSString *_message;
    NSURL *_recoveryURL;
}

+ (id)alertForError:(id)arg1 withTitle:(id)arg2;
+ (id)noPaymentProvider;
+ (id)invalidResponse;
+ (void)initialize;
@property(readonly, nonatomic) _Bool shouldInvalidate; // @synthesize shouldInvalidate=_shouldInvalidate;
@property(readonly, retain, nonatomic) NSURL *recoveryURL; // @synthesize recoveryURL=_recoveryURL;
@property(readonly, retain, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (id)alertWithTitle:(id)arg1;
- (id)description;
- (id)initWithMessage:(id)arg1 recoveryURL:(id)arg2 shouldInvalidate:(_Bool)arg3;
- (id)initWithMessage:(id)arg1;
- (id)initWithError:(id)arg1;

@end

