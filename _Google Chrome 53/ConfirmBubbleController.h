//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTextViewDelegate.h"

@class NSString, NSView;

@interface ConfirmBubbleController : NSViewController <NSTextViewDelegate>
{
    NSView *parent_;
    struct CGPoint origin_;
    unique_ptr_3f144655 model_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)linkClicked;
- (void)cancel;
- (void)accept;
- (BOOL)hasCancelButton;
- (BOOL)hasOkButton;
- (id)cancelButtonText;
- (id)okButtonText;
- (id)linkURL;
- (id)linkText;
- (id)messageText;
- (id)title;
- (struct CGPoint)origin;
- (void)windowWillClose:(id)arg1;
- (void)loadView;
- (id)initWithParent:(id)arg1 origin:(struct CGPoint)arg2 model:(unique_ptr_3f144655)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

