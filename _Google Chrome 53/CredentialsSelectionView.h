//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@interface CredentialsSelectionView : NSView
{
    struct ManagePasswordsBubbleModel *model_;
    struct scoped_nsobject<NSPopUpButton> usernamePopUpButton_;
    struct scoped_nsobject<NSSecureTextField> passwordField_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (const struct PasswordForm *)getSelectedCredentials;
- (id)initWithModel:(struct ManagePasswordsBubbleModel *)arg1;

@end

