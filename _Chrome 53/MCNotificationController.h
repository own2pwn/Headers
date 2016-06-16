//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@interface MCNotificationController : NSViewController
{
    const struct Notification *notification_;
    basic_string_805fe43b notificationID_;
    struct MessageCenter *messageCenter_;
    struct scoped_nsobject<HoverImageButton> closeButton_;
    struct scoped_nsobject<HoverImageButton> settingsButton_;
    struct scoped_nsobject<NSImageView> smallImage_;
    struct scoped_nsobject<NSImageView> icon_;
    scoped_nsobject_2ce0c752 title_;
    scoped_nsobject_2ce0c752 message_;
    scoped_nsobject_2ce0c752 contextMessage_;
    struct scoped_nsobject<NSView> listView_;
    struct scoped_nsobject<NSProgressIndicator> progressBarView_;
    struct scoped_nsobject<NSView> bottomView_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (basic_string_61b65554)wrapText:(const basic_string_61b65554 *)arg1 forFont:(id)arg2 maxNumberOfLines:(unsigned long long)arg3;
- (basic_string_61b65554)wrapText:(const basic_string_61b65554 *)arg1 forFont:(id)arg2 maxNumberOfLines:(unsigned long long)arg3 actualLines:(unsigned long long *)arg4;
- (struct CGRect)currentContentRect;
- (id)newLabelWithFrame:(struct CGRect)arg1;
- (void)configureContextMessageInFrame:(struct CGRect)arg1;
- (void)configureBodyInFrame:(struct CGRect)arg1;
- (void)configureTitleInFrame:(struct CGRect)arg1;
- (id)createSmallImageInFrame:(struct CGRect)arg1;
- (void)configureSettingsButtonInFrame:(struct CGRect)arg1;
- (void)configureCloseButtonInFrame:(struct CGRect)arg1;
- (id)createImageBox:(const struct Image *)arg1;
- (id)createIconView;
- (void)configureCustomBox:(id)arg1;
- (void)adjustFrameHeight:(struct NotificationLayoutParams *)arg1 delta:(double)arg2;
- (void)notificationClicked;
- (const basic_string_805fe43b *)notificationID;
- (const struct Notification *)notification;
- (void)buttonClicked:(id)arg1;
- (void)settingsClicked:(id)arg1;
- (void)close:(id)arg1;
- (struct CGRect)updateNotification:(const struct Notification *)arg1;
- (void)loadView;
- (id)initWithNotification:(const struct Notification *)arg1 messageCenter:(struct MessageCenter *)arg2;

@end
