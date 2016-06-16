//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class InfoBubbleView, NSString, NSWindow;

@interface BaseBubbleController : NSWindowController <NSWindowDelegate>
{
    NSWindow *parentWindow_;
    struct CGPoint anchor_;
    struct CGPoint anchorOffset_;
    InfoBubbleView *bubble_;
    struct unique_ptr<TabStripModelObserverBridge, std::__1::default_delete<TabStripModelObserverBridge>> tabStripObserverBridge_;
    id eventTap_;
    id resignationObserver_;
    BOOL shouldOpenAsKeyWindow_;
    BOOL shouldCloseOnResignKey_;
    WeakPtr_b2bffa4f bubbleReference_;
}

@property(nonatomic) WeakPtr_b2bffa4f bubbleReference; // @synthesize bubbleReference=bubbleReference_;
@property(nonatomic) BOOL shouldCloseOnResignKey; // @synthesize shouldCloseOnResignKey=shouldCloseOnResignKey_;
@property(nonatomic) BOOL shouldOpenAsKeyWindow; // @synthesize shouldOpenAsKeyWindow=shouldOpenAsKeyWindow_;
@property(readonly, nonatomic) InfoBubbleView *bubble; // @synthesize bubble=bubble_;
@property(nonatomic) struct CGPoint anchorPoint; // @synthesize anchorPoint=anchor_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)activateTabWithContents:(struct WebContents *)arg1 previousContents:(struct WebContents *)arg2 atIndex:(long long)arg3 reason:(int)arg4;
- (void)updateOriginFromAnchor;
- (void)cancel:(id)arg1;
- (void)registerKeyStateEventTap;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)close;
- (void)showWindow:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)closeBubble;
- (void)closeBubbleWithReason:(int)arg1;
- (void)closeCleanup;
- (void)parentWindowWillToggleFullScreen:(id)arg1;
- (void)parentWindowWillClose:(id)arg1;
- (void)parentWindowDidResize:(id)arg1;
- (id)verticalSeparatorWithFrame:(struct CGRect)arg1;
- (id)horizontalSeparatorWithFrame:(struct CGRect)arg1;
- (void)recordAnchorOffset;
@property(nonatomic) NSWindow *parentWindow;
- (void)unregisterFromNotifications;
- (void)registerForNotifications;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithWindow:(id)arg1 parentWindow:(id)arg2 anchoredAt:(struct CGPoint)arg3;
- (id)initWithWindowNibPath:(id)arg1 relativeToView:(id)arg2 offset:(struct CGPoint)arg3;
- (id)initWithWindowNibPath:(id)arg1 parentWindow:(id)arg2 anchoredAt:(struct CGPoint)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
