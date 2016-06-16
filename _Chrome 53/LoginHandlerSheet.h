//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

@class NSButton, NSSecureTextField, NSTextField;

@interface LoginHandlerSheet : NSWindowController
{
    NSTextField *nameField_;
    NSSecureTextField *passwordField_;
    NSTextField *authorityField_;
    NSTextField *explanationField_;
    NSButton *loginButton_;
    NSButton *cancelButton_;
    struct LoginHandlerMac *handler_;
}

- (void)setExplanation:(id)arg1;
- (void)setAuthority:(id)arg1;
- (void)autofillLogin:(id)arg1 password:(id)arg2;
- (void)cancelPressed:(id)arg1;
- (void)loginPressed:(id)arg1;
- (void)dealloc;
- (id)initWithLoginHandler:(struct LoginHandlerMac *)arg1;

@end
