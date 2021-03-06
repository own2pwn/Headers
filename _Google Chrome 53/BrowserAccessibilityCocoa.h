//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSNumber, NSString, NSURL, NSValue;

@interface BrowserAccessibilityCocoa : NSObject
{
    struct BrowserAccessibility *browserAccessibility_;
    scoped_nsobject_9420f295 children_;
}

+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)accessibilityShouldUseUniqueId;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilitySetOverrideValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityActionDescription:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (unsigned long long)accessibilityGetIndexOf:(id)arg1;
- (id)accessibilityAttributeNames;
- (unsigned long long)accessibilityArrayAttributeCount:(id)arg1;
- (id)accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3;
- (id)accessibilityActionNames;
- (id)accessibilityParameterizedAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1 forParameter:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)valueForRange:(struct _NSRange)arg1;
- (void)swapChildren:(scoped_nsobject_9420f295 *)arg1;
- (id)methodNameForAttribute:(id)arg1;
@property(readonly, nonatomic) id window;
@property(readonly, nonatomic) NSNumber *visited;
@property(readonly, nonatomic) NSArray *visibleRows;
@property(readonly, nonatomic) NSArray *visibleColumns;
@property(readonly, nonatomic) NSArray *visibleChildren;
@property(readonly, nonatomic) NSArray *visibleCells;
@property(readonly, nonatomic) NSValue *visibleCharacterRange;
@property(readonly, nonatomic) NSString *valueDescription;
@property(readonly, nonatomic) NSString *value;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) id titleUIElement;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSArray *tabs;
@property(readonly, nonatomic) NSString *subrole;
@property(readonly, nonatomic) id startTextMarker;
@property(readonly, nonatomic) NSString *sortDirection;
@property(readonly, nonatomic) NSValue *size;
@property(readonly, nonatomic) id selectedTextMarkerRange;
@property(readonly, nonatomic) NSValue *selectedTextRange;
@property(readonly, nonatomic) NSString *selectedText;
@property(readonly, nonatomic) NSArray *selectedChildren;
@property(readonly, nonatomic) NSNumber *selected;
@property(readonly, nonatomic) NSArray *rows;
@property(readonly, nonatomic) NSValue *rowIndexRange;
@property(readonly, nonatomic) NSArray *rowHeaders;
@property(readonly, nonatomic) NSString *roleDescription;
@property(readonly, nonatomic) NSString *role;
- (struct CGPoint)pointInScreen:(struct CGPoint)arg1 size:(struct CGSize)arg2;
- (BOOL)instanceActive;
- (struct BrowserAccessibility *)browserAccessibility;
- (struct BrowserAccessibilityDelegate *)delegate;
- (BOOL)shouldExposeNameInAXValue;
- (int)internalRole;
@property(readonly, nonatomic) NSNumber *required;
@property(readonly, nonatomic) NSValue *position;
@property(readonly, nonatomic) id parent;
@property(readonly, nonatomic) struct CGPoint origin;
@property(readonly, nonatomic) NSNumber *numberOfCharacters;
@property(readonly, nonatomic) NSString *orientation;
@property(readonly, nonatomic) NSNumber *minValue;
@property(readonly, nonatomic) NSNumber *maxValue;
@property(readonly, nonatomic) NSNumber *loadingProgress;
@property(readonly, nonatomic) NSNumber *loaded;
- (id)linkedUIElements;
- (void)addLinkedUIElementsFromAttribute:(int)arg1 addTo:(id)arg2;
@property(readonly, nonatomic) NSString *placeholderValue;
@property(readonly, nonatomic) NSNumber *isMultiSelectable;
@property(readonly, nonatomic) NSString *invalid;
@property(readonly, nonatomic, getter=isIgnored) BOOL ignored;
@property(readonly, nonatomic) NSNumber *insertionPointLineNumber;
@property(readonly, nonatomic) NSNumber *index;
@property(readonly, nonatomic) NSString *help;
@property(readonly, nonatomic) id header;
@property(readonly, nonatomic) NSNumber *grabbed;
@property(readonly, nonatomic) NSNumber *focused;
@property(readonly, nonatomic) NSNumber *expanded;
@property(readonly, nonatomic) id endTextMarker;
@property(readonly, nonatomic) NSNumber *enabled;
@property(readonly, nonatomic) NSString *dropEffects;
@property(readonly, nonatomic) id disclosedRows;
@property(readonly, nonatomic) NSNumber *disclosureLevel;
@property(readonly, nonatomic) id disclosedByRow;
@property(readonly, nonatomic) NSNumber *disclosing;
@property(readonly, nonatomic) NSString *description;
@property(readonly, nonatomic) NSArray *columns;
@property(readonly, nonatomic) NSValue *columnIndexRange;
@property(readonly, nonatomic) NSArray *columnHeaders;
- (void)childrenChanged;
@property(readonly, nonatomic) NSArray *children;
@property(readonly, nonatomic) NSNumber *ariaSetSize;
@property(readonly, nonatomic) NSString *ariaRelevant;
@property(readonly, nonatomic) NSNumber *ariaPosInSet;
@property(readonly, nonatomic) NSString *ariaLive;
@property(readonly, nonatomic) NSNumber *ariaBusy;
@property(readonly, nonatomic) NSNumber *ariaAtomic;
@property(readonly, nonatomic) NSString *accessKey;
- (void)detach;
- (id)initWithObject:(struct BrowserAccessibility *)arg1;

@end

