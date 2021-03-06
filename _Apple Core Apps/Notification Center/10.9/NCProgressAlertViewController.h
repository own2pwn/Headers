//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCBaseBannerViewController.h"

@class NSByteCountFormatter, NSImageView, NSObject<OS_dispatch_source>, NSProgressIndicator, NSString, NSTextField;

@interface NCProgressAlertViewController : NCBaseBannerViewController
{
    NSByteCountFormatter *_bytesFormatter;
    double _lastUpdateTime;
    NSObject<OS_dispatch_source> *_update_source;
    NSProgressIndicator *_progressIndicator;
    NSImageView *_imageView;
    NSTextField *_descriptionField;
    NSTextField *_statusField;
    NSString *_descriptionString;
    NSString *_statusString;
}

@property(retain) NSString *statusString; // @synthesize statusString=_statusString;
@property(retain) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property NSTextField *statusField; // @synthesize statusField=_statusField;
@property NSTextField *descriptionField; // @synthesize descriptionField=_descriptionField;
@property NSImageView *imageView; // @synthesize imageView=_imageView;
@property NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)_byteCountString;
- (void)_updateProgressAndStatus;
- (void)setValue:(id)arg1;
- (id)nibName;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

