//
//  NSTimer+STBlockSupport.m
//  CoreFrame
//
//  Created by wangguangfeng on 15/10/17.
//  Copyright © 2015年 Beijing Yimay Holiday Information Science & Technology Co.,Ltd. All rights reserved.
//

#import "NSTimer+STBlockSupport.h"

@implementation NSTimer (STBlockSupport)

+ (NSTimer *)st_scheduleTimerWithTimeInterval:(NSTimeInterval)interval
                                         block:(void(^)())block
                                       repeats:(BOOL)repeats
{
    return [self scheduledTimerWithTimeInterval:interval target:self selector:@selector(st_blockInvoke:) userInfo:[block copy] repeats:repeats];
}

- (void)st_blockInvoke:(NSTimer *)timer
{
    void (^block) () = timer.userInfo;
    if (block) {
        block();
    }
}

@end
