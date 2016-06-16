//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSTextViewDelegate.h"

@class InfoBarGradientView, NSButton, NSImageView, NSString, NSTextField;

@interface InfoBarController : NSViewController <NSTextViewDelegate>
{
    id <InfoBarContainerControllerBase> containerController_;
    struct WeakPtr<InfoBarCocoa> infobar_;
    InfoBarGradientView *infoBarView_;
    NSImageView *image_;
    NSTextField *labelPlaceholder_;
    NSButton *okButton_;
    NSButton *cancelButton_;
    NSButton *closeButton_;
    scoped_nsobject_2ce0c752 label_;
}

@property(nonatomic) id <InfoBarContainerControllerBase> containerController; // @synthesize containerController=containerController_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)initializeLabel;
@property(readonly, nonatomic) struct InfoBarDelegate *delegate;
- (void)disablePopUpMenu:(id)arg1;
- (void)layoutArrow;
- (void)removeButtons;
- (void)infobarWillClose;
- (void)infobarWillHide;
- (void)addAdditionalControls;
- (void)removeSelf;
- (void)dismiss:(id)arg1;
- (void)cancel:(id)arg1;
- (void)ok:(id)arg1;
- (BOOL)isOwned;
- (BOOL)textView:(id)arg1 clickedOnLink:(id)arg2 atIndex:(unsigned long long)arg3;
@property(readonly, nonatomic) struct InfoBarCocoa *infobar;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithInfoBar:(struct InfoBarCocoa *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
