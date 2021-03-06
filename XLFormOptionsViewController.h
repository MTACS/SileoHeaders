//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewController.h"

#import "UITableViewDataSource.h"
#import "XLFormRowDescriptorViewController.h"

@class NSString, XLFormRowDescriptor;

@interface XLFormOptionsViewController : UITableViewController <UITableViewDataSource, XLFormRowDescriptorViewController>
{
    NSString *_titleHeaderSection;
    NSString *_titleFooterSection;
    XLFormRowDescriptor *_rowDescriptor;
}

@property(nonatomic) __weak XLFormRowDescriptor *rowDescriptor; // @synthesize rowDescriptor=_rowDescriptor;
@property(copy, nonatomic) NSString *titleFooterSection; // @synthesize titleFooterSection=_titleFooterSection;
@property(copy, nonatomic) NSString *titleHeaderSection; // @synthesize titleHeaderSection=_titleHeaderSection;
- (void).cxx_destruct;
- (id)leftOptionForOption:(id)arg1;
- (id)selectorOptions;
- (id)valueDisplayTextForOption:(id)arg1;
- (id)selectedValuesAddOption:(id)arg1;
- (id)selectedValuesRemoveOption:(id)arg1;
- (_Bool)selectedValuesContainsOption:(id)arg1;
- (id)selectedValues;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (id)initWithStyle:(long long)arg1 titleHeaderSection:(id)arg2 titleFooterSection:(id)arg3;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

