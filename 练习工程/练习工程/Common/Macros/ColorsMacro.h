//
//  ColorsMacro.h
//  练习工程
//
//  Created by 马天驰 on 2019/4/17.
//  Copyright © 2019 马天驰. All rights reserved.
//

#ifndef ColorsMacro_h
#define ColorsMacro_h

/**
 三色素

 @param r 红
 @param g 绿
 @param b 蓝
 @param a 透明度
 @return 组成的颜色
 */
#define RGBA(r, g, b, a)   [UIColor colorWithRed:(r)/255.f,green:(g)/255.f,blue:(b)/255.f,alpha:a]

#define RGB(r,g,b)          [UIColor colorWithRed:(r)/255.f \
green:(g)/255.f \
blue:(b)/255.f \
alpha:1.f]

#define RGBOF(rgbValue)     [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 \
alpha:1.0]

#define RGBA_OF(rgbValue)   [UIColor colorWithRed:((float)(((rgbValue) & 0xFF000000) >> 24))/255.0 \
green:((float)(((rgbValue) & 0x00FF0000) >> 16))/255.0 \
blue:((float)(rgbValue & 0x0000FF00) >> 8)/255.0 \
alpha:((float)(rgbValue & 0x000000FF))/255.0]

#define RGBAOF(v, a)        [UIColor colorWithRed:((float)(((v) & 0xFF0000) >> 16))/255.0 \
green:((float)(((v) & 0xFF00) >> 8))/255.0 \
blue:((float)(v & 0xFF))/255.0 \
alpha:a]

#define RGBOF(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0xFF00) >> 8))/255.0 \
blue:((float)(rgbValue & 0xFF))/255.0 \
alpha:1.0]

#pragma mark - 系统颜色
#define MTCBlackColor         [UIColor blackColor]
#define MTCDarkGrayColor      [UIColor darkGrayColor]
#define MTCLightGrayColor     [UIColor lightGrayColor]
#define MTCWhiteColor         [UIColor whiteColor]
#define MTCGrayColor          [UIColor grayColor]
#define MTCRedColor           [UIColor redColor]
#define MTCGreenColor         [UIColor greenColor]
#define MTCBlueColor          [UIColor blueColor]
#define MTCCyanColor          [UIColor cyanColor]
#define MTCYellowColor        [UIColor yellowColor]
#define MTCMagentaColor       [UIColor magentaColor]
#define MTCOrangeColor        [UIColor orangeColor]
#define MTCPurpleColor        [UIColor purpleColor]
#define MTCClearColor         [UIColor clearColor]

#pragma mark - 自定义颜色（项目中常用的颜色 定义为16进制sRGB色值）

#endif /* ColorsMacro_h */
