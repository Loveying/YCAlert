//
//  ShareView.h
//  YCAlertDemo
//
//  Created by Codyy.YY on 2019/9/30.
//  Copyright © 2019 Codyy.XYY. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ShareButton.h"

@interface ShareView : UIView

/**
 *  打开分享Block
 */
@property (nonatomic , copy ) void (^openShareBlock)(ShareType type);

/**
 *  初始化分享视图
 *
 *  @param frame          frame
 *  @param infoArray      信息数组
 *  @param maxLineNumber  最大行数
 *  @param maxSingleCount 单行最大个数
 *
 *  @return 分享视图对象
 */
- (instancetype)initWithFrame:(CGRect)frame
                    InfoArray:(NSArray *)infoArray
                MaxLineNumber:(NSInteger)maxLineNumber
               MaxSingleCount:(NSInteger)maxSingleCount;

@end

