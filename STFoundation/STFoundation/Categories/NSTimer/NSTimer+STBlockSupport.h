//
//  NSTimer+STBlockSupport.h
//  CoreFrame
//
//  Created by wangguangfeng on 15/10/17.
//  Copyright © 2015年 Beijing Yimay Holiday Information Science & Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (STBlockSupport)

/**
 *  解决NSTimer可能造成的循环引用
 *
 *  @param interval interval
 *  @param block    block
 *  @param repeats  repeats
 *
 *  @return NSTimer
 */
+ (NSTimer *)st_scheduleTimerWithTimeInterval:(NSTimeInterval)interval
                                       block:(void(^)())block
                                     repeats:(BOOL)repeats;

@end
