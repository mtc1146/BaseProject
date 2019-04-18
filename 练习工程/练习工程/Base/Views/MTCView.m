//
//  MTCView.m
//  练习工程
//
//  Created by 马天驰 on 2019/4/17.
//  Copyright © 2019 马天驰. All rights reserved.
//

#import "MTCView.h"

@implementation MTCView

- (instancetype)init {
    
    self = [super init];
    if (self) {
        
    }
    return self;
}

- (instancetype)initWithFrame:(CGRect)frame {
    
    self = [super initWithFrame:frame];
    if (self) {
        
    }
    return self;
}

- (instancetype)initWithFrame:(CGRect)frame block:(MTCViewBlock)block {
    
    self = [super init];
    if (self) {
        
        self.block = block;
    }
    return self;
}

#pragma mark - 创建UI
- (void)initUI {
    
}

- (void)dealloc {
    
    
}

@end
