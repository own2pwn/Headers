//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSApplication.h>

__attribute__((visibility("hidden")))
@interface NCApplication : NSApplication
{
}

- (id)accessibilityAttributeValue:(id)arg1;
- (void)_cycleWindowsReversed:(BOOL)arg1;
- (id)makeWindowsPerform:(SEL)arg1 inOrder:(BOOL)arg2;
- (void)_reactToDisplayChangedNotification;
- (BOOL)_sendScreenNotificationWhenDockSizeChanges;

@end
