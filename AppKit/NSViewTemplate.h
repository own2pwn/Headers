//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSString;

@interface NSViewTemplate : NSView
{
    NSString *_className;
}

+ (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)awakeAfterUsingCoder:(id)arg1;
- (id)createRealObject;
- (void)setClassName:(id)arg1;
- (id)className;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithView:(id)arg1 className:(id)arg2;

@end

