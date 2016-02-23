//
//  UIButton+STAnimation.m
//  CoreFrame
//
//  Created by 徐方玉 on 15/11/12.
//  Copyright © 2015年 Beijing Yimay Holiday Information Science & Technology Co.,Ltd. All rights reserved.
//

#import "UIButton+STAnimation.h"

@implementation UIButton (STAnimation)

- (void)st_addClickAnimation
{
    [self.layer addAnimation:[self clickAnimation] forKey:@"SHOW"];

}
-(CAKeyframeAnimation*)clickAnimation
{
    CAKeyframeAnimation *k = [CAKeyframeAnimation animationWithKeyPath:@"transform.scale"];
    k.values = @[@(0.1),@(1.0),@(1.5)];
    k.keyTimes = @[@(0.0),@(0.5),@(0.8),@(1.0)];
    k.calculationMode = kCAAnimationLinear;
    return k;
}

@end
