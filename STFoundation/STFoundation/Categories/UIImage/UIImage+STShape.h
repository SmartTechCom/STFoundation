// UIImage+STShape.h
// Created by Trevor Harmon on 9/20/09.
// Free for personal or commercial use, with or without modification.
// No warranty is expressed or implied.

// Extends the UIImage class to support making rounded corners

#import <UIKit/UIKit.h>

@interface UIImage (STShape)

#pragma mark - 圆角带边框图片
/**
 *  生成圆角图片，如果bordersize不为0，那么会有透明边框
 *
 *  @param cornerSize 圆角半径
 *  @param borderSize 边框宽度
 *
 *  @return 生成一张新的圆角图片
 */
- (UIImage *) st_roundedCornerImage:(NSInteger) cornerSize borderSize:(NSInteger) borderSize;


#pragma mark - 可拉伸图片
/**
 *  获取可伸展图片，默认从中点
 *
 *  @return 返回一张新的图片
 */
- (UIImage *)st_resizableImage;
- (UIImage *)st_resizeImageWithQuality:(CGInterpolationQuality)quality rate:(CGFloat)rate;

#pragma mark - 单色图片
// 获取一张16*16的单色图片
+ (UIImage *)st_imageWithColor:(UIColor *)color;
// 根据大小获取单色图片
+ (UIImage *)st_imageWithColor:(UIColor *)color size:(CGSize)size;
// 根据大小获取带透明度的单色图片
+ (UIImage *)st_imageWithColor:(UIColor *)color opaque:(BOOL)opaque size:(CGSize)size;
// 自定义大小，带透明度，圆角，单色图片
+ (UIImage *)st_roundedImageWithColor:(UIColor *)color opaque:(BOOL)opaque size:(CGSize)size cornerRadius:(CGFloat)cornerRadius;
// 自定义大小，带透明度，自定义形状，单色图片
+ (UIImage *)st_imageWithColor:(UIColor *)color opaque:(BOOL)opaque size:(CGSize)size shape:(UIBezierPath *)shape;

#pragma mark - 图片压缩
// 将图片压缩成JPEG的格式，最大边大小为width。提交图片到网络用JPEG的格式会压缩很多数据量...
// 由于返回的是UIImage,此方法可能没多大用处
- (UIImage*)st_imageByScalingWidth:(float)width;

// 等比压缩图片到指定大小
- (UIImage*)st_imageByScalingAndCroppingForSize:(CGSize)targetSize;

// 压缩图片到指定大小
- (UIImage *)st_croppedWithrect:(CGRect)rect;
@end
