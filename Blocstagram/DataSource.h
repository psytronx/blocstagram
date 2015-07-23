//
//  DataSource.h
//  Blocstagram
//
//  Created by psytronx on 7/22/15.
//  Copyright (c) 2015 Logical Dimension. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

@property (nonatomic, strong, readonly) NSArray *mediaItems;

+ (instancetype) sharedInstance;

@end
