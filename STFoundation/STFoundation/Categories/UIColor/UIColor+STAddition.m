//
//  UIColor+STAddition.m
//  CoreFrame
//
//  Created by wangguangfeng on 15/10/18.
//  Copyright © 2015年 Beijing Yimay Holiday Information Science & Technology Co.,Ltd. All rights reserved.
//

#import "UIColor+STAddition.h"

@implementation UIColor (STAddition)

+ (UIColor *)st_colorWithHex:(int)hex {
    return [self st_colorWithHex:hex alpha:1];
}

+ (UIColor *)st_colorWithHex:(int)hex alpha:(CGFloat)alpha {
    return [UIColor colorWithRed:((float)((hex & 0xFF0000) >> 16)) / 255.0 green:((float)((hex & 0xFF00) >> 8)) / 255.0 blue:((float)(hex & 0xFF)) / 255.0 alpha:alpha];
}

+ (UIColor *)st_colorWithHexString:(NSString *)hexString {
    unsigned hexValue = 0;
    NSScanner *scanner = [NSScanner scannerWithString:hexString];
    [scanner scanHexInt:&hexValue];
    return [self st_colorWithHex:hexValue];
}

@end
