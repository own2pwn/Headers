//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/HoverImageButton.h>

#import "NSTextFieldDelegate.h"

@class NSString, ProfileChooserController;

@interface EditableProfileNameButton : HoverImageButton <NSTextFieldDelegate>
{
    scoped_nsobject_0ef9b51e profileNameTextField_;
    struct Profile *profile_;
    ProfileChooserController *controller_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (BOOL)canBecomeKeyView;
- (void)showEditableView:(id)arg1;
- (void)saveProfileName;
- (id)initWithFrame:(struct CGRect)arg1 profile:(struct Profile *)arg2 profileName:(id)arg3 editingAllowed:(BOOL)arg4 withController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
