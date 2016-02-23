//
//  NSString+STStringToDictionary.h
//  CoreFrame
//
//  Created by 姜云锋 on 15/11/27.
//  Copyright © 2015年 Beijing Yimay Holiday Information Science & Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (STStringToDictionary)

/**
 *  字符串转字典
 *
 *  @param JSONString json样式字符串
 *
 *  @return
 */

+(NSMutableDictionary *)changeJSONStringToNSDictionary:(NSString *)JSONString;

/**
 *  字符串转数组
 *
 *  @param JSONString json样式字符串
 *
 *  @return
 */
+(NSMutableArray *)changeJSONStringToNSMutableArray:(NSString *)JSONString;
@end
