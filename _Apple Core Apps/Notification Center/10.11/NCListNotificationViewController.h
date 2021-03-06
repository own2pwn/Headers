//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NCAppListViewController.h"

@class NCImageFramedView, NSArray, NSColor, NSImageView, NSLayoutConstraint, NSString, NSTextField;

@interface NCListNotificationViewController : NCAppListViewController
{
    NSArray *_accessibilityProxies;
    BOOL _timeInFuture;
    NSString *_timeString;
    float _originalSubtitleHeight;
    float _originalBodyHeight;
    float _originalBodyBottom;
    float _originalBodyToTime2;
    float _originalTopConstant;
    float _originalInlineImageBottom;
    float _originalAttachmentHeight;
    float _height;
    NSLayoutConstraint *_bodyHeightConstraint;
    NSLayoutConstraint *_bodyBottomConstraint;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_subtitleHeightConstraint;
    NSLayoutConstraint *_imageMaxHeightConstraint;
    NSLayoutConstraint *_imageMaxWidthConstraint;
    NSLayoutConstraint *_imageBottomConstraint;
    NSLayoutConstraint *_attachmentImageConstraint;
    NSImageView *_imageView;
    NSImageView *_imageView2;
    NCImageFramedView *_inlineImageView;
    NSTextField *_titleTF;
    NSTextField *_subtitleTF;
    NSTextField *_timeTF;
    NSTextField *_bodyTF;
}

@property(nonatomic) NSTextField *bodyTF; // @synthesize bodyTF=_bodyTF;
@property(nonatomic) NSTextField *timeTF; // @synthesize timeTF=_timeTF;
@property(nonatomic) NSTextField *subtitleTF; // @synthesize subtitleTF=_subtitleTF;
@property(nonatomic) NSTextField *titleTF; // @synthesize titleTF=_titleTF;
@property(nonatomic) NCImageFramedView *inlineImageView; // @synthesize inlineImageView=_inlineImageView;
@property(nonatomic) NSImageView *imageView2; // @synthesize imageView2=_imageView2;
@property(nonatomic) NSImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) NSLayoutConstraint *attachmentImageConstraint; // @synthesize attachmentImageConstraint=_attachmentImageConstraint;
@property(nonatomic) NSLayoutConstraint *imageBottomConstraint; // @synthesize imageBottomConstraint=_imageBottomConstraint;
@property(nonatomic) NSLayoutConstraint *imageMaxWidthConstraint; // @synthesize imageMaxWidthConstraint=_imageMaxWidthConstraint;
@property(nonatomic) NSLayoutConstraint *imageMaxHeightConstraint; // @synthesize imageMaxHeightConstraint=_imageMaxHeightConstraint;
@property(nonatomic) NSLayoutConstraint *subtitleHeightConstraint; // @synthesize subtitleHeightConstraint=_subtitleHeightConstraint;
@property(nonatomic) NSLayoutConstraint *titleTopConstraint; // @synthesize titleTopConstraint=_titleTopConstraint;
@property(nonatomic) NSLayoutConstraint *bodyBottomConstraint; // @synthesize bodyBottomConstraint=_bodyBottomConstraint;
@property(nonatomic) NSLayoutConstraint *bodyHeightConstraint; // @synthesize bodyHeightConstraint=_bodyHeightConstraint;
- (float)height;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateDate;
- (void)setRepresentedObject:(id)arg1;
- (void)_layoutView;
- (void)_ncupdateViewConstraints;
- (_Bool)updateDataContent;
- (void)updateViewContent;
- (void)updateViewImages;
- (void)viewWillAppear;
- (BOOL)wantsUpdateLayer;
@property(readonly, nonatomic) NSColor *shadowColor;
@property(readonly, nonatomic) NSColor *textColor;
- (void)awakeFromNib;

@end

