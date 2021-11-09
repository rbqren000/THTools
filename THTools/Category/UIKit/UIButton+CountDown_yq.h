//
//  UIButton+CountDown_yq.h
//  YQToolsDemo
//
//  Created by weixb on 2017/2/16.
//  Copyright © 2017年 weixb. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIButton (CountDown_yq)

//是否正在倒计时
@property (nonatomic, assign) BOOL isCountDown;

/// 按钮倒计时 显示格式为秒
/// @param timeout 倒计时时间
/// @param tittle 倒计时完之后title
/// @param preTittle 倒计时过程中前缀title
/// @param sufTitle 倒计时过程中后缀title
/// @param disEnableWhenCountDown 倒计时过程中是否禁用
- (void)yq_startTime:(NSInteger )timeout title:(NSString *)tittle waitPreTittle:(NSString *)preTittle waitSufTitle:(NSString *)sufTitle disEnableWhenCountDown:(BOOL)disEnableWhenCountDown;

/// 按钮倒计时 显示格式为分:秒 xx:xx
/// @param timeout 倒计时时间
/// @param tittle 倒计时完之后title
/// @param preTittle 倒计时过程中前缀title
/// @param sufTitle 倒计时过程中后缀title
/// @param disEnableWhenCountDown 倒计时过程中是否禁用
-(void)yq_startMMSSTime:(NSInteger)timeout title:(NSString *)tittle waitPreTittle:(NSString *)preTittle waitSufTitle:(NSString *)sufTitle disEnableWhenCountDown:(BOOL)disEnableWhenCountDown;

@end
