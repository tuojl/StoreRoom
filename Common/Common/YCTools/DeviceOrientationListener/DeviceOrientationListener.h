//
//  DeviceOrientationListener.h
//  Common
//
//  Created by wlpiaoyi on 14/12/26.
//  Copyright (c) 2014年 wlpiaoyi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@protocol DeviceOrientationListenerDelegate <NSObject>
// Device oriented vertically, home button on the bottom
-(void) deviceOrientationPortrait;
// Device oriented vertically, home button on the top
-(void) deviceOrientationPortraitUpsideDown;
// Device oriented horizontally, home button on the right
-(void) deviceOrientationLandscapeLeft;
// Device oriented horizontally, home button on the left
-(void) deviceOrientationLandscapeRight;
@end

@interface DeviceOrientationListener : NSObject

+(DeviceOrientationListener*) getSingleInstance;
/**
 旋转当前装置
 */
+(void) attemptRotationToDeviceOrientation:(UIDeviceOrientation) deviceOrientation;
@property(nonatomic,readonly) UIDeviceOrientation orientation;
@property(nonatomic) float duration;
-(void) addListener:(id<DeviceOrientationListenerDelegate>) listener;
-(void) removeListenser:(id<DeviceOrientationListenerDelegate>) listener;
@end
