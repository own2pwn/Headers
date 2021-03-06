//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/HoverButton.h>

#import "ThemedWindowDrawing.h"

@interface AlertIndicatorButton : HoverButton <ThemedWindowDrawing>
{
    int alertState_;
    struct unique_ptr<gfx::AnimationDelegate, std::__1::default_delete<gfx::AnimationDelegate>> fadeAnimationDelegate_;
    struct unique_ptr<gfx::Animation, std::__1::default_delete<gfx::Animation>> fadeAnimation_;
    int showingAlertState_;
    BOOL isDormant_;
    id animationDoneTarget_;
    SEL animationDoneAction_;
    struct scoped_nsobject<NSImage> affordanceImage_;
    id clickTarget_;
    SEL clickAction_;
}

@property(readonly, nonatomic) int showingAlertState; // @synthesize showingAlertState=showingAlertState_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)windowDidChangeActive;
- (void)windowDidChangeTheme;
- (void)exitDormantPeriod;
- (void)enterDormantPeriod;
- (void)updateEnabledForMuteToggle;
- (void)handleClick:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setClickTarget:(id)arg1 withAction:(SEL)arg2;
- (void)setAnimationDoneTarget:(id)arg1 withAction:(SEL)arg2;
- (void)setAction:(SEL)arg1;
- (void)setTarget:(id)arg1;
- (void)transitionToAlertState:(int)arg1;
- (void)updateIconForState:(int)arg1;
- (void)removeFromSuperview;
- (id)init;

@end

