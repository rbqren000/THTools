//
//  NSDecimalNumber+Extension_th.m
//  THToolsDemo
//
//  Created by 涂浩 on 2017/2/16.
//  Copyright © 2017年 TuHao. All rights reserved.
//

#import "NSDecimalNumber+Extension_th.h"

@implementation NSDecimalNumber (Extension_th)

/**
 *  @brief  四舍五入 NSRoundPlain
 *
 *  @param scale 限制位数
 *
 *  @return 返回结果
 */
- (NSDecimalNumber *)th_roundToScale:(NSUInteger)scale{
    return [self th_roundToScale:scale mode:NSRoundPlain];
}
/**
 *  @brief  四舍五入
 *
 *  @param scale        限制位数
 *  @param roundingMode NSRoundingMode
 *
 *  @return 返回结果
 */
- (NSDecimalNumber *)th_roundToScale:(NSUInteger)scale mode:(NSRoundingMode)roundingMode{
    NSDecimalNumberHandler * handler = [[NSDecimalNumberHandler alloc] initWithRoundingMode:roundingMode scale:scale raiseOnExactness:NO raiseOnOverflow:YES raiseOnUnderflow:YES raiseOnDivideByZero:YES];
    return [self decimalNumberByRoundingAccordingToBehavior:handler];
}

- (NSDecimalNumber*)th_decimalNumberWithPercentage:(float)percent {
    NSDecimalNumber * percentage = [NSDecimalNumber decimalNumberWithDecimal:[[NSNumber numberWithFloat:percent] decimalValue]];
    return [self decimalNumberByMultiplyingBy:percentage];
}

- (NSDecimalNumber *)th_decimalNumberWithDiscountPercentage:(NSDecimalNumber *)discountPercentage {
    NSDecimalNumber * hundred = [NSDecimalNumber decimalNumberWithString:@"100"];
    NSDecimalNumber * percent = [self decimalNumberByMultiplyingBy:[discountPercentage decimalNumberByDividingBy:hundred]];
    return [self decimalNumberBySubtracting:percent];
}

- (NSDecimalNumber *)th_decimalNumberWithDiscountPercentage:(NSDecimalNumber *)discountPercentage roundToScale:(NSUInteger)scale {
    NSDecimalNumber * value = [self th_decimalNumberWithDiscountPercentage:discountPercentage];
    return [value th_roundToScale:scale];
}

- (NSDecimalNumber *)th_discountPercentageWithBaseValue:(NSDecimalNumber *)baseValue {
    NSDecimalNumber * hundred = [NSDecimalNumber decimalNumberWithString:@"100"];
    NSDecimalNumber * percentage = [[self decimalNumberByDividingBy:baseValue] decimalNumberByMultiplyingBy:hundred];
    return [hundred decimalNumberBySubtracting:percentage];
}

- (NSDecimalNumber *)th_discountPercentageWithBaseValue:(NSDecimalNumber *)baseValue roundToScale:(NSUInteger)scale {
    NSDecimalNumber * discount = [self th_discountPercentageWithBaseValue:baseValue];
    return [discount th_roundToScale:scale];
}

@end
