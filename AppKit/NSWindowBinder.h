//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSViewStateBinder.h>

@interface NSWindowBinder : NSViewStateBinder
{
}

+ (BOOL)isUsableWithObject:(id)arg1;
+ (id)bindingsForObject:(id)arg1;
+ (id)objectMechanismsRequiredForObject:(id)arg1;
+ (void)_applicationWillTerminate:(id)arg1;
+ (void)initialize;
- (void)windowDidResize:(id)arg1;
- (void)window:(id)arg1 didChangeToVisibleState:(BOOL)arg2;
- (void)_updateObject:(id)arg1 observedController:(id)arg2 observedKeyPath:(id)arg3 context:(void *)arg4;
- (void)_updateWindow:(id)arg1 withVisibilityState:(id)arg2;
- (void)_updateWindow:(id)arg1 withWidth:(id)arg2 height:(id)arg3;
- (BOOL)shouldProcessObservations;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (BOOL)_isBooleanBinding:(id)arg1;
- (BOOL)isBindingReadOnly:(id)arg1;
- (Class)valueClassForBinding:(id)arg1;

@end

