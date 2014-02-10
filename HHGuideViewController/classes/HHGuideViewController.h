//
//  HHGuideViewController.h
//  HHGuideViewController
//
//  Created Hanhan on 14-2-10.
//  Copyright (c) 2013年 LeAustinHan. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HHGuideViewController : UIViewController
{
    BOOL _animating;
    
    UIScrollView *_guideScroll;
}

@property (nonatomic, assign) BOOL animating;

@property (nonatomic, strong) UIScrollView *guideScroll;

+ (HHGuideViewController *)sharedGuide;

+ (void)show;

+ (void)hide;

@end
