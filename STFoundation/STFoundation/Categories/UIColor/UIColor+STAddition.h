//
//  UIColor+STAddition.h
//  CoreFrame
//
//  Created by wangguangfeng on 15/10/18.
//  Copyright © 2015年 Beijing Yimay Holiday Information Science & Technology Co.,Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (STAddition)

+ (UIColor *)st_colorWithHex:(int)hex;
+ (UIColor *)st_colorWithHex:(int)hex alpha:(CGFloat)alpha;
+ (UIColor *)st_colorWithHexString:(NSString *)hexString;

@end
