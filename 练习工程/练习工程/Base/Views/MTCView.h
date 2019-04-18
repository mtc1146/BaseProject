//
//  MTCView.h
//  练习工程
//
//  Created by 马天驰 on 2019/4/17.
//  Copyright © 2019 马天驰. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^MTCViewBlock)(id data);

@interface MTCView : UIView

- (instancetype)init;

- (instancetype)initWithFrame:(CGRect)frame;

- (instancetype)initWithFrame:(CGRect)frame block:(MTCViewBlock)block;

/**
 创建UI
 */
- (void)initUI;

@property (copy, nonatomic) MTCViewBlock block;

@end

NS_ASSUME_NONNULL_END
