//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IPropertySizeController.h"

@class NSColor;

@interface TPropertyInfoWindowSizeController : IPropertySizeController
{
    NSColor *_textColor;
    struct TKeyValueBinder _textColorBinder;
}

@property(retain) NSColor *textColor; // @synthesize textColor=_textColor;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateWithNodes:(const struct TFENodeVector *)arg1;
- (void)setView:(id)arg1;
- (void)aboutToTearDown;
- (void)initCommon;

@end
