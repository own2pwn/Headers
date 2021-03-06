//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NCLineView, NCTodayItem, NSButton, NSLayoutConstraint, NSTrackingArea, NSView;
@protocol NCTodayConfigItemDelegate;

__attribute__((visibility("hidden")))
@interface NCTodayConfigItemViewController : NSViewController
{
    double _originalImageHeight;
    double _originalTitleConstraint;
    NSTrackingArea *_trackingArea;
    NCTodayItem *_item;
    id <NCTodayConfigItemDelegate> _delegate;
    NSLayoutConstraint *_imageHeightConstraint;
    NSLayoutConstraint *_descriptionMaxHeightConstraint;
    NSLayoutConstraint *_leftTitleConstraint;
    NSView *_indicatorView;
    NCLineView *_bottomLine;
    NSButton *_showInFinderButton;
    NSButton *_addButton;
}

+ (void)initialize;
@property(nonatomic) NSButton *addButton; // @synthesize addButton=_addButton;
@property(nonatomic) NSButton *showInFinderButton; // @synthesize showInFinderButton=_showInFinderButton;
@property(nonatomic) NCLineView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) NSView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) NSLayoutConstraint *leftTitleConstraint; // @synthesize leftTitleConstraint=_leftTitleConstraint;
@property(nonatomic) NSLayoutConstraint *descriptionMaxHeightConstraint; // @synthesize descriptionMaxHeightConstraint=_descriptionMaxHeightConstraint;
@property(nonatomic) NSLayoutConstraint *imageHeightConstraint; // @synthesize imageHeightConstraint=_imageHeightConstraint;
@property(nonatomic) __weak id <NCTodayConfigItemDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NCTodayItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)showInFinderPressed:(id)arg1;
- (void)addItemPressed:(id)arg1;
@property(nonatomic) _Bool showBottomLine;
- (void)viewDidLayout;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)awakeFromNib;
- (id)nibName;
- (void)dealloc;
- (id)initWithTodayItem:(id)arg1;

@end

