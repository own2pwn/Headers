//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TDrawRectView.h"

@class NSDictionary, NSFont, TTextField<TTextWithTitleFieldImplProtocol>;

@interface TSpotlightMetaDataGroupView : TDrawRectView
{
    struct vector<std::__1::pair<TNSRef<TTextField<TTextWithTitleFieldImplProtocol>*>, TNSRef<TLayoutBinder *>>, std::__1::allocator<std::__1::pair<TNSRef<TTextField<TTextWithTitleFieldImplProtocol>*>, TNSRef<TLayoutBinder *>>>> _textWithTitleFields;
    struct TNSRef<NSDictionary *> _spotlightMetaData;
    double _interTextFieldYGap;
    _Bool _autoAdjustTitleWidths;
    _Bool _addLabelSuffix;
    _Bool _showAttributesWithNoData;
    TTextField<TTextWithTitleFieldImplProtocol> *_genericTextWithTitleField;
    struct TNSRef<NSFont *> _titleFieldsFont;
}

@property _Bool showAttributesWithNoData; // @synthesize showAttributesWithNoData=_showAttributesWithNoData;
@property double interTextFieldYGap; // @synthesize interTextFieldYGap=_interTextFieldYGap;
@property _Bool addLabelSuffix; // @synthesize addLabelSuffix=_addLabelSuffix;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TString)recordingYearText:(id)arg1;
- (struct TString)exposureTimeText:(id)arg1;
- (struct TString)dimensionsText:(const struct TString *)arg1 height:(id)arg2;
- (id)objectForAttributeName:(const struct TString *)arg1;
- (struct TString)titleForAttributeName:(const struct TString *)arg1 withLabelSuffix:(_Bool)arg2;
- (id)bottomTextField;
- (void)clear;
- (void)reset;
- (void)populate;
- (void)adjustTitleWidths:(double)arg1 textWidths:(double)arg2;
- (void)adjustTitleWidths:(double)arg1;
- (void)getMaxTitleWith:(double *)arg1 maxTextWidth:(double *)arg2;
- (double)maxTitleWidth;
@property(retain, nonatomic) NSFont *titleFieldsFont; // @dynamic titleFieldsFont;
@property(retain, nonatomic) NSDictionary *spotlightMetaData; // @dynamic spotlightMetaData;
- (void)aboutToTearDown;
- (void)awakeFromNib;
- (void)initCommon;

@end
