//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/MenuButton.h>

@interface AppToolbarButton : MenuButton
{
    struct unique_ptr<AppMenuButtonIconPainterDelegateMac, std::__1::default_delete<AppMenuButtonIconPainterDelegateMac>> delegate_;
    int severity_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setSeverity:(int)arg1 shouldAnimate:(BOOL)arg2;
- (unsigned int)vectorIconColor:(BOOL)arg1;
- (int)vectorIconId;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end
