//
//  MediaTableViewCell.h
//  Blocstagram
//
//  Created by psytronx on 7/23/15.
//  Copyright (c) 2015 Logical Dimension. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media* mediaItem;

+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

@end
