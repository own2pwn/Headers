//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IAirDropStateViewController.h"

@class IMeetingRoomProgressViewController, NSString, TButton, TImageView, TTextField;

@interface TMeetingRoomAskUserViewController : IAirDropStateViewController
{
    IMeetingRoomProgressViewController *_controller;
    TImageView *_imageView;
    TTextField *_mainTextFld;
    TButton *_saveButton;
    TButton *_saveAndOpenButton;
    struct TNSRef<TLayoutBinder *> _layoutBinder;
}

@property(readonly) TButton *saveAndOpenButton; // @synthesize saveAndOpenButton=_saveAndOpenButton;
@property(readonly) TButton *saveButton; // @synthesize saveButton=_saveButton;
@property(readonly, retain) TImageView *imageView; // @synthesize imageView=_imageView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)viewDidMoveToSuperview;
@property(retain, nonatomic) NSString *mainTextStr; // @dynamic mainTextStr;
- (void)aboutToTearDown;
- (void)viewLoaded;

@end
