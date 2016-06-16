//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@interface TDesktopWindow : NSWindow
{
    _Bool _desktopIsMainWindow;
    _Bool _desktopIsKeyWindow;
}

@property _Bool desktopIsKeyWindow; // @synthesize desktopIsKeyWindow=_desktopIsKeyWindow;
@property _Bool desktopIsMainWindow; // @synthesize desktopIsMainWindow=_desktopIsMainWindow;
- (void)redo:(id)arg1;
- (void)undo:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (id)baseBrowserWindowController;
- (id)accessibilityActionNames;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
- (void)rightMouseDown:(id)arg1;
- (_Bool)isDesktopWindow;
- (BOOL)isMovable;
- (BOOL)canBecomeKeyWindow;
- (BOOL)canBecomeMainWindow;
- (_Bool)ql_isDesktopWindow;
- (void)finishInitializing;
- (id)init;

@end
