// UIImage+STAlpha.h
// Created by Trevor Harmon on 9/20/09.
// Free for personal or commercial use, with or without modification.
// No warranty is expressed or implied.

// Helper methods for adding an alpha layer to an image

#import <UIKit/UIKit.h>

@interface UIImage (STAlpha)

/**
 *  判断一个图片是否有alpha通道
 *
 *  @return YES or NO
 */
- (BOOL) st_hasAlpha;
/**
 *  为图片增加一个alpha通道
 *
 *  @return 一个新图片
 */
- (UIImage *) st_imageWithAlpha;
/**
 *  为图片生成一个透明边框
 *
 *  @param borderSize 边框的宽度
 *
 *  @return 包含透明边框的新图片
 */
- (UIImage *) st_transparentBorderImage:(NSUInteger) borderSize;
- (CGImageRef) st_newBorderMask:(NSUInteger) borderSize size:(CGSize) size;

@end
