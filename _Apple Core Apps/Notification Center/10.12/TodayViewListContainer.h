//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class _TtC21NotificationCenterApp33TodayViewListContainerPlaceholder;

__attribute__((visibility("hidden")))
@interface TodayViewListContainer : NSViewController
{
    // Error parsing type: , name: placeholder
    // Error parsing type: , name: dragging
    // Error parsing type: , name: hasCardLook
    // Error parsing type: , name: darkCard
    // Error parsing type: , name: contentController
    // Error parsing type: , name: headerController
    // Error parsing type: , name: _cardController
}

+ (id)containerFrom:(id)arg1;
- (CDUnknownBlockType).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeader:(id)arg1 content:(id)arg2 hasCardLook:(BOOL)arg3 darkLook:(BOOL)arg4;
@property(nonatomic, retain) NSViewController *headerController; // @synthesize headerController;
@property(nonatomic, readonly) NSViewController *contentController; // @synthesize contentController;
@property(nonatomic, readonly) BOOL darkCard; // @synthesize darkCard;
@property(nonatomic, readonly) BOOL hasCardLook; // @synthesize hasCardLook;
@property(nonatomic) BOOL dragging; // @synthesize dragging;
@property(nonatomic, retain) _TtC21NotificationCenterApp33TodayViewListContainerPlaceholder *placeholder; // @synthesize placeholder;

@end

