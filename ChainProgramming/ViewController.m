//
//  ViewController.m
//  ChainProgramming
//
//  Created by YANG on 2017/7/17.
//  Copyright © 2017年 洪海 杨. All rights reserved.
//

#import "ViewController.h"
#import "UIButton+Extension.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    UIButton *btn = [UIButton yhh_buttonWithSetProperty:^(UIButton *btn) {
        btn.yhh_title(@"btn", UIControlStateNormal)
        .yhh_title(@"Selected", UIControlStateSelected)
        .yhh_titleColor([UIColor blueColor], UIControlStateNormal)
        .yhh_titleColor([UIColor redColor], UIControlStateSelected);
        
        btn.frame = CGRectMake(100, 100, 100, 100);
        
    } action:^(UIButton *btn) {
        btn.selected = !btn.selected;
    }];
    
    [self.view addSubview:btn];
    
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
