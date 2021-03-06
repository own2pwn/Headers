//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSWindowDelegate.h"

@class NSString;

@interface NativeAppWindowController : NSWindowController <NSWindowDelegate>
{
    struct NativeAppWindowCocoa *appWindow_;
    struct scoped_nsobject<NSView> titlebar_background_view_;
}

@property(nonatomic) struct NativeAppWindowCocoa *appWindow; // @synthesize appWindow=appWindow_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)handledByExtensionCommand:(id)arg1 priority:(int)arg2;
- (struct CGSize)window:(id)arg1 willUseFullScreenContentSize:(struct CGSize)arg2;
- (BOOL)windowShouldZoom:(id)arg1 toFrame:(struct CGRect)arg2;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowDidMiniaturize:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidExitFullScreen:(id)arg1;
- (void)windowDidEnterFullScreen:(id)arg1;
- (void)windowDidEndLiveResize:(id)arg1;
- (void)windowDidResize:(id)arg1;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidResignKey:(id)arg1;
- (void)windowDidBecomeKey:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)setTitlebarBackgroundView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

