//
//  UIButton+Extension.h
//  YHHBaiSiProject
//
//  Created by Yang on 17/1/9.
//  Copyright © 2017年 YHH. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, YHHButtonEdgeInsetsStyle) {
    YHHButtonEdgeInsetsStyleTop,     //image在上 label在下
    YHHButtonEdgeInsetsStyleLeft,    //image在左 label在右
    YHHButtonEdgeInsetsStyleBottom,  //image在下 label在上
    YHHButtonEdgeInsetsStyleRight    //image在右 label在左
};

@interface UIButton (Extension)
/**
 *  设置button imageView与titleLabel的布局样式，及间距
 *  
 *  @param style imageView与titleLabel 的布局样式
 *  @param space imageView与titleLabel 之间的间距
 */
- (void)layoutButtonWithEdgeInsetsStyle:(YHHButtonEdgeInsetsStyle)style imageTitleSpace:(CGFloat)space;

@end


typedef UIButton *(^setBlock)(id param, UIControlState state);

@interface UIButton (Set)
/**
 链式设置Btn的属性:
 设置title调用时btn.title(title, UIControlState)
 */
- (setBlock)yhh_title;
- (setBlock)yhh_titleColor;
/**
 设置image调用时btn.image(image/imageName, UIControlState)
 */
- (setBlock)yhh_image;
- (setBlock)yhh_backgroundImage;


/**
 通过block设置Btn的属性:
 @prama setProperty     在block里面的btn的各个属性，初始化Btn
 @prama action          在block里面传btn点击需要相应的事件
 */
+ (instancetype)yhh_buttonWithSetProperty:(void(^)(UIButton *btn))setProperty action:(void(^)(UIButton *btn))action;

@end
