//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/BasePasswordsContentViewController.h>

#import "NSTextViewDelegate.h"

@class HyperlinkTextView, NSButton, NSString;

@interface ConfirmationPasswordSavedViewController : BasePasswordsContentViewController <NSTextViewDelegate>
{
    scoped_nsobject_1b22b22f confirmationText_;
    scoped_nsobject_6cadfeaf okButton_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)onOKClicked:(id)arg1;
- (struct ManagePasswordsBubbleModel *)model;
- (id)defaultButton;
@property(readonly) NSButton *okButton;
@property(readonly) HyperlinkTextView *confirmationText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
