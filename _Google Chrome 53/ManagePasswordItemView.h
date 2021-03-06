//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "PasswordItemTwoColumnView.h"

@class NSButton, NSString, NSTextField;

@interface ManagePasswordItemView : NSView <PasswordItemTwoColumnView>
{
    scoped_nsobject_0ef9b51e usernameField_;
    scoped_nsobject_0ef9b51e passwordField_;
    struct scoped_nsobject<HoverImageButton> deleteButton_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) double secondColumnWidth;
@property(readonly, nonatomic) double firstColumnWidth;
- (void)layoutWithFirstColumn:(double)arg1 secondColumn:(double)arg2;
- (id)initWithForm:(const struct PasswordForm *)arg1 target:(id)arg2 action:(SEL)arg3;
@property(readonly) NSButton *deleteButton;
@property(readonly) NSTextField *passwordField;
@property(readonly) NSTextField *usernameField;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

