//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage, NSImageView, NSPanel, NSString, NSTextField;

@interface EjectFailedController : NSObject
{
    NSString *_text;
    NSImage *_image;
    NSPanel *_window;
    NSTextField *_errorText;
    NSImageView *_iconView;
}

+ (void)failedWithBlankMedia:(int)arg1 identifier:(id)arg2;
+ (void)failedWithMountpoint:(id)arg1 isDisc:(BOOL)arg2;
@property(nonatomic) NSImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) NSTextField *errorText; // @synthesize errorText=_errorText;
@property(nonatomic) NSPanel *window; // @synthesize window=_window;
@property(retain, nonatomic) NSImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)dialogDismissed:(id)arg1;
- (void)awakeFromNib;
- (id)initWithBlankMedia:(int)arg1 identifier:(id)arg2;
- (id)initWithMountpoint:(id)arg1 isDisc:(BOOL)arg2;

@end
