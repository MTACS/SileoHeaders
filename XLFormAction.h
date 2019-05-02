//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface XLFormAction : NSObject
{
    Class _viewControllerClass;
    NSString *_viewControllerStoryboardId;
    NSString *_viewControllerNibName;
    unsigned long long _viewControllerPresentationMode;
    CDUnknownBlockType _formBlock;
    SEL _formSelector;
    NSString *_formSegueIdentifier;
    Class _formSegueClass;
}

@property(retain, nonatomic) Class formSegueClass; // @synthesize formSegueClass=_formSegueClass;
@property(copy, nonatomic) NSString *formSegueIdentifier; // @synthesize formSegueIdentifier=_formSegueIdentifier;
@property(nonatomic) SEL formSelector; // @synthesize formSelector=_formSelector;
@property(copy, nonatomic) CDUnknownBlockType formBlock; // @synthesize formBlock=_formBlock;
@property(nonatomic) unsigned long long viewControllerPresentationMode; // @synthesize viewControllerPresentationMode=_viewControllerPresentationMode;
@property(copy, nonatomic) NSString *viewControllerNibName; // @synthesize viewControllerNibName=_viewControllerNibName;
@property(copy, nonatomic) NSString *viewControllerStoryboardId; // @synthesize viewControllerStoryboardId=_viewControllerStoryboardId;
@property(retain, nonatomic) Class viewControllerClass; // @synthesize viewControllerClass=_viewControllerClass;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *formSegueIdenfifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

