//
//  NSTimer+Extension.h
//  YMHLoopPageDemo
//
//  Created by Azen.Xu on 15/10/21.
//  Copyright © 2015年 Azen.Xu. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (Extension)

/** 暂停*/
- (void)pauseTimer;
/** 继续*/
- (void)resumeTimer;
/** 延时继续*/
- (void)resumeTimerAfterTimeInterval:(NSTimeInterval)interval;
@end
