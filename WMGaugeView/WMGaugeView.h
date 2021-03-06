/*
 * WMGaugeView.h
 *
 * Copyright (C) 2014 William Markezana <william.markezana@me.com>
 *
 */

#import <UIKit/UIKit.h>

/**
 * Styling enumerations
 */
typedef enum
{
    WMGaugeViewSubdivisionsAlignmentTop,
    WMGaugeViewSubdivisionsAlignmentCenter,
    WMGaugeViewSubdivisionsAlignmentBottom
}
WMGaugeViewSubdivisionsAlignment;

typedef enum
{
    WMGaugeViewNeedleStyle3D,
    WMGaugeViewNeedleStyleFlatThin,
    WMGaugeViewNeedleStyleNone,
}
WMGaugeViewNeedleStyle;

typedef enum
{
    WMGaugeViewNeedleScrewStyleGradient,
    WMGaugeViewNeedleScrewStylePlain,
    WMGaugeViewNeedleScrewStyleNone,
}
WMGaugeViewNeedleScrewStyle;

typedef enum
{
    WMGaugeViewInnerBackgroundStyleGradient,
    WMGaugeViewInnerBackgroundStyleNoGradient,
    WMGaugeViewInnerBackgroundStyleFlat,
    WMGaugeViewInnerBackgroundStyleRing,
}
WMGaugeViewInnerBackgroundStyle;

/**
 * WMGaugeView class
 */
@interface WMGaugeView : UIView

/**
 * WMGaugeView properties
 */
@property (nonatomic, readwrite, assign) bool showInnerBackground;
@property (nonatomic, readwrite, assign) bool showInnerRim;
@property (nonatomic, readwrite, assign) CGFloat innerRimWidth;
@property (nonatomic, readwrite, assign) CGFloat innerRimBorderWidth;
@property (nonatomic, readwrite, assign) WMGaugeViewInnerBackgroundStyle innerBackgroundStyle;
@property (nonatomic, readwrite, strong) UIColor *innerCircleFillColor;
@property (nonatomic, readwrite, strong) UIColor *externalCircleFillColor;
@property (nonatomic, readwrite, assign) CGFloat needleWidth;
@property (nonatomic, readwrite, assign) CGFloat needleHeight;
@property (nonatomic, readwrite, strong) UIColor *needleFillColor;
@property (nonatomic, readwrite, strong) UIColor *needleStrokeColor;
@property (nonatomic, readwrite, assign) bool showNeedleShadow;
@property (nonatomic, readwrite, assign) CGFloat needleScrewRadius;
@property (nonatomic, readwrite, strong) UIColor *needleScrewColor;
@property (nonatomic, readwrite, assign) WMGaugeViewNeedleStyle needleStyle;
@property (nonatomic, readwrite, assign) WMGaugeViewNeedleScrewStyle needleScrewStyle;
@property (nonatomic, readwrite, assign) bool showNeedleScrewShadow;
@property (nonatomic, readwrite, assign) CGFloat scalePosition;
@property (nonatomic, readwrite, assign) CGFloat scaleStartAngle;
@property (nonatomic, readwrite, assign) CGFloat scaleEndAngle;
@property (nonatomic, readwrite, assign) CGFloat scaleDivisions;
@property (nonatomic, readwrite, assign) CGFloat scaleSubdivisions;
@property (nonatomic, readwrite, assign) bool showScaleShadow;
@property (nonatomic, readwrite, assign) bool showScale;
@property (nonatomic, readwrite, assign) bool showScaleLabels;
@property (nonatomic, readwrite, assign) WMGaugeViewSubdivisionsAlignment scalesubdivisionsAligment;
@property (nonatomic, readwrite, assign) CGFloat scaleDivisionsLength;
@property (nonatomic, readwrite, assign) CGFloat scaleDivisionsWidth;
@property (nonatomic, readwrite, assign) CGFloat scaleSubdivisionsLength;
@property (nonatomic, readwrite, assign) CGFloat scaleSubdivisionsWidth;
@property (nonatomic, readwrite, assign) CGFloat scaleInset;
@property (nonatomic, readwrite, strong) UIColor *scaleDivisionColor;
@property (nonatomic, readwrite, strong) UIColor *scaleSubDivisionColor;
@property (nonatomic, readwrite, strong) UIFont *scaleFont;
@property (nonatomic, readwrite, assign) float value;
@property (nonatomic, readwrite, assign) float minValue;
@property (nonatomic, readwrite, assign) float maxValue;
@property (nonatomic, readwrite, assign) bool showRangeLabels;
@property (nonatomic, readwrite, assign) CGFloat rangeLabelsWidth;
@property (nonatomic, readwrite, strong) UIFont *rangeLabelsFont;
@property (nonatomic, readwrite, strong) UIColor *rangeLabelsFontColor;
@property (nonatomic, readwrite, assign) CGFloat rangeLabelsFontKerning;
@property (nonatomic, readwrite, strong) NSArray *rangeValues;
@property (nonatomic, readwrite, strong) NSArray *rangeColors;
@property (nonatomic, readwrite, strong) NSArray *rangeLabels;
@property (nonatomic, readwrite, strong) UIColor *unitOfMeasurementColor;
@property (nonatomic, readwrite, assign) CGFloat unitOfMeasurementVerticalOffset;
@property (nonatomic, readwrite, assign) CGFloat unitOfMeasurementHorizontalOffset;
@property (nonatomic, readwrite, strong) UIFont *unitOfMeasurementFont;
@property (nonatomic, readwrite, strong) NSString *unitOfMeasurement;
@property (nonatomic, readwrite, assign) bool showUnitOfMeasurement;
@property (nonatomic, readwrite, strong) UIColor *measurementColor;
@property (nonatomic, readwrite, assign) CGFloat measurementVerticalOffset;
@property (nonatomic, readwrite, assign) CGFloat measurementHorizontalOffset;
@property (nonatomic, readwrite, strong) UIFont *measurementFont;
@property (nonatomic, readwrite, strong) NSString *measurementFormat;
@property (nonatomic, readwrite, assign) bool showMeasurement;
@property (nonatomic, readwrite, assign) CGFloat ringWidth;
@property (nonatomic, readwrite, strong) UIColor *ringColor;

/**
 * WMGaugeView public functions
 */
- (void)setValue:(float)value animated:(BOOL)animated;
- (void)setValue:(float)value animated:(BOOL)animated completion:(void (^)(BOOL finished))completion;
- (void)setValue:(float)value animated:(BOOL)animated duration:(NSTimeInterval)duration;
- (void)setValue:(float)value animated:(BOOL)animated duration:(NSTimeInterval)duration completion:(void (^)(BOOL finished))completion;

@end
