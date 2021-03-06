//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

#import "NSWindowDelegate.h"

@class NSDictionary, NSImageView, NSPopUpButton, NSString, NSTextField, NSTextView;

@interface SiriUXBugTemplateViewController : NSViewController <NSWindowDelegate>
{
    NSDictionary *_values;
    NSImageView *_radarIcon;
    NSTextField *_titleText;
    NSTextView *_descriptionText;
    NSPopUpButton *_classificationPopUp;
    NSPopUpButton *_reproduciblePopUp;
    CDUnknownBlockType _completion;
}

+ (id)_radarIcon;
+ (id)_radarURL;
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain) NSPopUpButton *reproduciblePopUp; // @synthesize reproduciblePopUp=_reproduciblePopUp;
@property(retain) NSPopUpButton *classificationPopUp; // @synthesize classificationPopUp=_classificationPopUp;
@property(retain) NSTextView *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(retain) NSTextField *titleText; // @synthesize titleText=_titleText;
@property(retain) NSImageView *radarIcon; // @synthesize radarIcon=_radarIcon;
- (void).cxx_destruct;
- (BOOL)window:(id)arg1 shouldPopUpDocumentPathMenu:(id)arg2;
- (void)_finishDialog:(BOOL)arg1;
- (void)selectedReproducible:(id)arg1;
- (void)selectedClassification:(id)arg1;
- (void)clickedCancelButton:(id)arg1;
- (void)clickedConfirmButton:(id)arg1;
@property(copy) NSDictionary *values;
- (void)dealloc;
- (void)setupWithValues:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)_reproducibleMenu;
- (id)_classificationMenu;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

