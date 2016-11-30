//
//  HCHeader.h
//  HCSystemicQRCodeDemo
//
//  Created by Caoyq on 16/5/4.
//  Copyright © 2016年 honeycao. All rights reserved.
//

#ifndef HCHeader_h
#define HCHeader_h

#import "UIFont+MyFont.h"
#import "UIView+Frame.h"
#import "SystemFunctions.h"

#define kBgImgX             45*ratio
#define kBgImgY             (64+60)*ratio
#define kBgImgWidth         230*ratio

#define kScrollLineHeight   20*ratio

#define kTipY               (kBgImgY+kBgImgWidth+kTipHeight)
#define kTipHeight          40*ratio

#define kLampX              ([[UIScreen mainScreen] bounds].size.width-kLampWidth)/2
#define kLampY              ([[UIScreen mainScreen] bounds].size.height-kLampWidth-80*ratio)
#define kLampWidth          64*ratio

#define kBgAlpha            0.6

static NSString *bgImg_img = @"ZJNativeBundle.bundle/scanBackground";
static NSString *Line_img = @"ZJNativeBundle.bundle/scanLine";
static NSString *turn_on = @"ZJNativeBundle.bundle/turn_on";
static NSString *turn_off = @"ZJNativeBundle.bundle/turn_off";
static NSString *ringPath = @"ZJNativeBundle.bundle/ring";
static NSString *ringType = @"wav";

#endif /* HCHeader_h */