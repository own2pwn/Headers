//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/ElementAppleScript.h>

@class NSString;

@interface BookmarkNodeAppleScript : ElementAppleScript
{
    const struct BookmarkNode *bookmarkNode_;
    NSString *tempTitle_;
}

@property(copy, nonatomic) NSString *tempTitle; // @synthesize tempTitle=tempTitle_;
- (struct BookmarkModel *)bookmarkModel;
- (id)index;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setBookmarkNode:(const struct BookmarkNode *)arg1;
- (id)initWithBookmarkNode:(const struct BookmarkNode *)arg1;
- (void)dealloc;
- (id)init;

@end
