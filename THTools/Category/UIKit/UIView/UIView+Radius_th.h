//
//  UIView+Radius_th.h
//  THToolsDemo
//
//  Created by WeiXinbing on 2019/6/12.
//  Copyright © 2019 TuHao. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIView (Radius_th)
/**
 配置不同数量不同大小的圆角, 使用UIBezierPath进行切圆角
 
 @param topLeft 上左
 @param topRight 上右
 @param bottomLeft 下左
 @param bottomRight 下右
 */
- (void)radiusWithTopLeft:(CGFloat)topLeft
                     topRight:(CGFloat)topRight
                   bottomLeft:(CGFloat)bottomLeft
                  bottomRight:(CGFloat)bottomRight;

@end

NS_ASSUME_NONNULL_END
