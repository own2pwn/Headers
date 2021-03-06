//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/BaseBubbleController.h>

@class NSButton, NSTextField;

@interface ToolbarActionsBarBubbleMac : BaseBubbleController
{
    BOOL acknowledged_;
    BOOL anchoredToAction_;
    NSButton *actionButton_;
    NSTextField *itemList_;
    NSButton *dismissButton_;
    NSButton *learnMoreButton_;
    unique_ptr_542e4e25 delegate_;
}

+ (void)setAnimationEnabledForTesting:(BOOL)arg1;
@property(readonly, nonatomic) NSButton *learnMoreButton; // @synthesize learnMoreButton=learnMoreButton_;
@property(readonly, nonatomic) NSButton *dismissButton; // @synthesize dismissButton=dismissButton_;
@property(readonly, nonatomic) NSTextField *itemList; // @synthesize itemList=itemList_;
@property(readonly, nonatomic) NSButton *actionButton; // @synthesize actionButton=actionButton_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onButtonClicked:(id)arg1;
- (void)layout;
- (id)addButtonWithString:(const basic_string_61b65554 *)arg1;
- (id)addTextFieldWithString:(const basic_string_61b65554 *)arg1 fontSize:(double)arg2 alignment:(unsigned long long)arg3;
- (id)attributedStringWithString:(const basic_string_61b65554 *)arg1 fontSize:(double)arg2 alignment:(unsigned long long)arg3;
- (void)windowWillClose:(id)arg1;
- (void)showWindow:(id)arg1;
- (id)initWithParentWindow:(id)arg1 anchorPoint:(struct CGPoint)arg2 anchoredToAction:(BOOL)arg3 delegate:(unique_ptr_542e4e25)arg4;

@end

