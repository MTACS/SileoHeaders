//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XLFormBaseCell.h"

#import "UITextFieldDelegate.h"
#import "XLFormReturnKeyProtocol.h"

@class NSMutableArray, NSNumber, NSString, UILabel, UITextField;

@interface XLFormTextFieldCell : XLFormBaseCell <UITextFieldDelegate, XLFormReturnKeyProtocol>
{
    UITextField *_textField;
    UILabel *_textLabel;
    long long _returnKeyType;
    long long _nextReturnKeyType;
    NSNumber *_textFieldLengthPercentage;
    NSNumber *_textFieldMaxNumberOfCharacters;
    NSMutableArray *_dynamicCustomConstraints;
}

@property(retain, nonatomic) NSMutableArray *dynamicCustomConstraints; // @synthesize dynamicCustomConstraints=_dynamicCustomConstraints;
@property(copy, nonatomic) NSNumber *textFieldMaxNumberOfCharacters; // @synthesize textFieldMaxNumberOfCharacters=_textFieldMaxNumberOfCharacters;
@property(copy, nonatomic) NSNumber *textFieldLengthPercentage; // @synthesize textFieldLengthPercentage=_textFieldLengthPercentage;
@property(nonatomic) long long nextReturnKeyType; // @synthesize nextReturnKeyType=_nextReturnKeyType;
@property(readonly, nonatomic) __weak UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
- (void).cxx_destruct;
@property(nonatomic) long long returnKeyType; // @synthesize returnKeyType=_returnKeyType;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (void)updateConstraints;
- (id)layoutConstraints;
- (void)unhighlight;
- (void)highlight;
- (_Bool)formDescriptorCellBecomeFirstResponder;
- (_Bool)formDescriptorCellCanBecomeFirstResponder;
- (void)update;
- (void)configure;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

