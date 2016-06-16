//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSImageView, NSLayoutConstraint, NSTextField;

__attribute__((visibility("hidden")))
@interface NCTodaySummaryItemController : NSViewController
{
    NSLayoutConstraint *_heightConstraint;
    NSTextField *_textField;
    NSButton *_actionButton;
    NSImageView *_imageView;
}

@property(nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) NSButton *actionButton; // @synthesize actionButton=_actionButton;
@property(nonatomic) NSTextField *textField; // @synthesize textField=_textField;
@property(nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
- (void)setRepresentedObject:(id)arg1;
- (void)summaryClicked:(id)arg1;
- (void)awakeFromNib;

@end
