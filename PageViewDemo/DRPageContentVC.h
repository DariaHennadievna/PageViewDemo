//
//  DRPageContentVC.h
//  PageViewDemo
//
//  Created by Admin on 02.08.15.
//  Copyright (c) 2015 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DRPageContentVC : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;

@property (nonatomic) NSUInteger pageIndex;
@property (nonatomic) NSString *titleText;
@property (nonatomic) NSString *imageFile;


@end
