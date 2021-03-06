//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "HasWeakBrowserPointer.h"
#import "NSTextViewDelegate.h"

@class HoverButton, NSString, NSView;

@interface DownloadShelfController : NSViewController <NSTextViewDelegate, HasWeakBrowserPointer>
{
    HoverButton *hoverCloseButton_;
    BOOL barIsVisible_;
    BOOL isFullscreen_;
    BOOL shouldCloseOnMouseExit_;
    BOOL isMouseInsideView_;
    struct unique_ptr<DownloadShelf, std::__1::default_delete<DownloadShelf>> bridge_;
    double maxShelfHeight_;
    double currentShelfHeight_;
    struct ScopedCrTrackingArea trackingArea_;
    scoped_nsobject_9420f295 downloadItemControllers_;
    NSView *itemContainerView_;
    id <ViewResizer> resizeDelegate_;
    struct PageNavigator *navigator_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateCloseButton;
- (void)willLeaveFullscreen;
- (void)willEnterFullscreen;
- (void)removeTrackingArea;
- (void)installTrackingArea;
- (void)autoClose;
- (void)maybeAutoCloseAfterDelay;
- (void)cancelAutoClose;
- (void)scheduleAutoClose;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)closed;
- (void)add:(id)arg1;
- (void)addDownloadItem:(struct DownloadItem *)arg1;
- (void)layoutItems;
- (void)layoutItems:(BOOL)arg1;
- (float)height;
- (void)animationDidEnd:(id)arg1;
- (BOOL)isVisible;
- (struct DownloadShelf *)bridge;
- (void)showDownloadShelf:(BOOL)arg1 isUserAction:(BOOL)arg2;
- (void)downloadWasOpened:(id)arg1;
- (void)removeDownload:(id)arg1 isShelfClosing:(BOOL)arg2;
- (void)remove:(id)arg1;
- (void)handleClose:(id)arg1;
- (void)showDownloadsTab:(id)arg1;
- (id)animatableView;
- (void)viewFrameDidChange:(id)arg1;
- (void)browserWillBeDestroyed;
- (void)dealloc;
- (void)awakeFromNib;
- (id)initWithBrowser:(struct Browser *)arg1 resizeDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

