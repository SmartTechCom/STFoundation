//
//  NSTimer+Extension.m
//  YMHLoopPageDemo
//
//  Created by Azen.Xu on 15/10/21.
//  Copyright © 2015年 Azen.Xu. All rights reserved.
//

#import "NSTimer+Extension.h"

@implementation NSTimer (Extension)

-(void)pauseTimer
{
    if (![self isValid]) {
        return ;
    }
    [self setFireDate:[NSDate distantFuture]];
}


-(void)resumeTimer
{
    if (![self isValid]) {
        return ;
    }
    [self setFireDate:[NSDate date]];
}

- (void)resumeTimerAfterTimeInterval:(NSTimeInterval)interval
{
    if (![self isValid]) {
        return ;
    }
    [self setFireDate:[NSDate dateWithTimeIntervalSinceNow:interval]];
}


@end
