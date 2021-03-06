//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextView.h"

#import "NSDraggingSource.h"
#import "ThemedWindowDrawing.h"
#import "URLDropTarget.h"

@class NSString;

@interface AutocompleteTextFieldEditor : NSTextView <NSDraggingSource, URLDropTarget, ThemedWindowDrawing>
{
    struct scoped_nsobject<URLDropTargetHandler> dropHandler_;
    struct scoped_nsobject<NSCharacterSet> forbiddenCharacters_;
    BOOL interpretingKeyEvents_;
    BOOL textChangedByKeyEvents_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)windowDidChangeActive;
- (void)windowDidChangeTheme;
- (void)drawRect:(struct CGRect)arg1;
- (void)copyToFindPboard:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)setAttributedString:(id)arg1;
- (void)doCommandBySelector:(SEL)arg1;
- (void)didChangeText;
- (BOOL)shouldChangeTextInRange:(struct _NSRange)arg1 replacementString:(id)arg2;
- (void)interpretKeyEvents:(id)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1 affinity:(unsigned long long)arg2 stillSelecting:(BOOL)arg3;
- (struct _NSRange)selectionRangeForProposedRange:(struct _NSRange)arg1 granularity:(unsigned long long)arg2;
- (void)insertText:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (id)urlDropController;
- (void)otherMouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (id)menuForEvent:(id)arg1;
- (void)updateRuler;
- (void)updateFontPanel;
- (void)pasteAndGo:(id)arg1;
- (void)pasteAndMatchStyle:(id)arg1;
- (void)paste:(id)arg1;
- (struct AutocompleteTextFieldObserver *)observer;
- (void)didUndoOrRedo:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)showURL:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (BOOL)dragSelectionWithEvent:(id)arg1 offset:(struct CGSize)arg2 slideBack:(BOOL)arg3;
- (void)viewDidMoveToWindow;
- (void)updateColorsToMatchTheme;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)shouldDrawInsertionPoint;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

