//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/HoverButton.h>

@interface HoverImageButton : HoverButton
{
    struct scoped_nsobject<NSImage> defaultImage_;
    struct scoped_nsobject<NSImage> hoverImage_;
    struct scoped_nsobject<NSImage> pressedImage_;
    BOOL disableActivationOnClick_;
}

@property(nonatomic) BOOL disableActivationOnClick; // @synthesize disableActivationOnClick=disableActivationOnClick_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)mouseDown:(id)arg1;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (void)setPressedImage:(id)arg1;
- (void)setHoverImage:(id)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;

@end

