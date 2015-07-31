//
//  MediaFullScreenViewController.h
//  Blocstagram
//
//  Created by psytronx on 7/30/15.
//  Copyright (c) 2015 Logical Dimension. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaFullScreenViewController : UIViewController

@property (nonatomic, strong) UIScrollView *scrollView;
@property (nonatomic, strong) UIImageView *imageView;

- (instancetype) initWithMedia:(Media *)media;

- (void) centerScrollView;

@end
