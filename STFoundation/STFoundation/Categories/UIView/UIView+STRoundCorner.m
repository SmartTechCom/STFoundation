//
//  UIView+STRoundCorner.m
//  Auction
//
//  Created by kenneth wang on 15/11/14.
//  Copyright © 2015年 kw. All rights reserved.
//

#import "UIView+STRoundCorner.h"

@implementation UIView (STRoundCorner)

- (void)makeRoundCorner:(CGFloat)cornerRadius
{
    CALayer *roundedLayer = [self layer];
    [roundedLayer setMasksToBounds:YES];
    [roundedLayer setCornerRadius:cornerRadius];
}

@end
