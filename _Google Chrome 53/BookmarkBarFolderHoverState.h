//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface BookmarkBarFolderHoverState : NSObject
{
    struct scoped_nsobject<BookmarkButton> hoverButton_;
    int hoverState_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)openBookmarkFolderOnHoverButton:(id)arg1;
- (void)closeBookmarkFolderOnHoverButton:(id)arg1;
- (void)setHoverState:(int)arg1;
- (int)hoverState;
- (id)hoverButton;
- (void)cancelPendingOpenBookmarkFolderOnHoverButton;
- (void)scheduleOpenBookmarkFolderOnHoverButton:(id)arg1;
- (void)cancelPendingCloseBookmarkFolderOnHoverButton;
- (void)scheduleCloseBookmarkFolderOnHoverButton;
- (void)draggingExited;
- (unsigned long long)draggingEnteredButton:(id)arg1;
- (id)init;

@end

