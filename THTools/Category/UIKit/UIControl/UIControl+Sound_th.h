//
//  UIControl+Sound_th.h
//  THToolsDemo
//
//  Created by 涂浩 on 2017/2/16.
//  Copyright © 2017年 TuHao. All rights reserved.
//
//  https://github.com/scopegate/octave
//  Octave: A free library of UI sounds, handmade for iOS http://raisedbeaches.com/octave

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface UIControl (Sound_th)

/// Set the sound for a particular control event (or events).
/// @param name The name of the file. The method looks for an image with the specified name in the application’s main bundle.
/// @param controlEvent A bitmask specifying the control events for which the action message is sent. See “Control Events” for bitmask constants.
//不同事件增加不同声音
- (void)th_setSoundNamed:(NSString *)name forControlEvent:(UIControlEvents)controlEvent;

@end
