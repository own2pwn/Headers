//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSWindow;

@protocol UserInterfaceItemCommandHandler <NSObject>
- (void)commandDispatchUsingKeyModifiers:(id)arg1 window:(NSWindow *)arg2;
- (void)commandDispatch:(id)arg1 window:(NSWindow *)arg2;
- (BOOL)validateUserInterfaceItem:(id <NSValidatedUserInterfaceItem>)arg1 window:(NSWindow *)arg2;
@end

