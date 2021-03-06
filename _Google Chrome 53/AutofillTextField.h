//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

#import "AutofillInputField.h"
#import "NSTextFieldDelegate.h"

@class NSString;

@interface AutofillTextField : NSTextField <AutofillInputField, NSTextFieldDelegate>
{
    id <AutofillInputDelegate> inputDelegate_;
    struct scoped_nsobject<NSString> validityMessage_;
    BOOL shouldFilterClick_;
    BOOL handlingFirstClick_;
    BOOL isMultiline_;
}

+ (Class)cellClass;
@property(nonatomic) BOOL isMultiline; // @synthesize isMultiline=isMultiline_;
@property(nonatomic) id <AutofillInputDelegate> inputDelegate; // @synthesize inputDelegate=inputDelegate_;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL invalid;
@property(copy, nonatomic) NSString *validityMessage;
@property(readonly, nonatomic) BOOL isDefault;
@property(copy, nonatomic) NSString *defaultValue;
@property(copy, nonatomic) NSString *fieldValue;
- (void)resizeToText;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)controlTextDidChange:(id)arg1;
- (void)controlTextDidEndEditing:(id)arg1;
- (void)mouseDown:(id)arg1;
- (struct CGRect)decorationFrame;
- (void)onEditorMouseDown:(id)arg1;
- (BOOL)becomeFirstResponder;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

