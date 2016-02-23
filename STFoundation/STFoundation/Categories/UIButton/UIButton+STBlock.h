//
//  UIButton+STBlock.h
//  CoreFrame
//
//  Created by Azen.Xu on 15/10/30.
//  Copyright © 2015年 Beijing Yimay Holiday Information Science & Technology Co.,Ltd. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <objc/runtime.h>


typedef void (^ActionBlock)();

@interface UIButton(STBlock)

@property (readonly) NSMutableDictionary *event;
/**
 *  函数式编程 - 实现Btn响应事件代码的高聚合.
 *  使用示例：UIButton *bottomBtn = [[[UIButton alloc] init] handleControlEvent:UIControlEventTouchUpInside withBlock:^{
 *      NSLog(@"更多精彩敬请期待");
 *  }];
 *
 *  @param controlEvent 按钮事件
 *  @param action       回调block
 *
 *  @return btn自身
 */
- (instancetype) handleControlEvent:(UIControlEvents)controlEvent withBlock:(ActionBlock)action;

@end
