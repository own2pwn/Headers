//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 14 2016 15:02:16).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NCTodayItemViewController.h"

@class NSLayoutConstraint, NSTextView;

__attribute__((visibility("hidden")))
@interface NCThirdPartyDisclosuresViewController : NCTodayItemViewController
{
    double _originalMarginTop;
    double _originalMarginBottom;
    _Bool _enableStocks;
    _Bool _enableWeather;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    NSLayoutConstraint *_heightConstraint;
    NSTextView *_textView;
}

@property(nonatomic) NSTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property(nonatomic) NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;
@property(nonatomic) _Bool enableWeather; // @synthesize enableWeather=_enableWeather;
@property(nonatomic) _Bool enableStocks; // @synthesize enableStocks=_enableStocks;
- (void)_updateView;
- (void)viewDidLoad;

@end

