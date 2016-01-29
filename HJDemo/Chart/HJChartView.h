//
//  HJChartView.h
//  HJDemo
//
//  Created by jixuhui on 16/1/14.
//  Copyright © 2016年 Hubbert. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum _CHART_MODEL_TYPE {
    CHART_MODEL_TYPE_DAY = 0,
    CHART_MODEL_TYPE_WEEK,
    CHART_MODEL_TYPE_MONTH
}CHART_MODEL_TYPE;

typedef enum _CHART_INFO_TYPE {
    CHART_INFO_TYPE_VOLUME = 0,
    CHART_INFO_TYPE_KDJ
}CHART_INFO_TYPE;

@interface HJChartView : UIView

@property(assign,nonatomic) BOOL transformed;
@property (nonatomic,strong) NSArray *modelsArray;
@property (nonatomic,strong) NSArray *stockInfo;
@property (nonatomic) CHART_MODEL_TYPE modelType;
@property (nonatomic) CHART_INFO_TYPE infoType;

- (instancetype)initWithData:(NSArray *)array;
- (void)renderMe;
- (void)resetMe;

@end
