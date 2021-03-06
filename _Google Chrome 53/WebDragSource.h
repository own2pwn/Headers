//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSView;

@interface WebDragSource : NSObject
{
    struct WebContentsImpl *contents_;
    NSView *contentsView_;
    struct unique_ptr<content::DropData, std::__1::default_delete<content::DropData>> dropData_;
    struct scoped_nsobject<NSImage> dragImage_;
    struct CGPoint imageOffset_;
    struct scoped_nsobject<NSPasteboard> pasteboard_;
    unsigned long long dragOperationMask_;
    struct FilePath downloadFileName_;
    struct GURL downloadURL_;
    struct ScopedTypeRef<const __CFString *, base::internal::ScopedCFTypeRefTraits<const __CFString *>> fileUTI_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dragPromisedFileTo:(id)arg1;
- (void)endDragAt:(struct CGPoint)arg1 operation:(unsigned long long)arg2;
- (void)startDrag;
- (struct CGPoint)convertScreenPoint:(struct CGPoint)arg1;
- (void)lazyWriteToPasteboard:(id)arg1 forType:(id)arg2;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)arg1;
- (void)clearWebContentsView;
- (id)initWithContents:(struct WebContentsImpl *)arg1 view:(id)arg2 dropData:(const struct DropData *)arg3 image:(id)arg4 offset:(struct CGPoint)arg5 pasteboard:(id)arg6 dragOperationMask:(unsigned long long)arg7;
- (id)dragImage;
- (void)fillPasteboard;

@end

