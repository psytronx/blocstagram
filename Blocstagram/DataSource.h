//
//  DataSource.h
//  Blocstagram
//
//  Created by psytronx on 7/22/15.
//  Copyright (c) 2015 Logical Dimension. All rights reserved.
//

#import <Foundation/Foundation.h>

@class Media;

typedef void (^NewItemCompletionBlock)(NSError *error);

@interface DataSource : NSObject

extern NSString *const InitialCacheLoadDoneNotification;

@property (nonatomic, strong, readonly) NSArray *mediaItems;
@property (nonatomic, assign) BOOL isRefreshing;
@property (nonatomic, assign) BOOL isLoadingOlderItems;
@property (nonatomic, assign) BOOL thereAreNoMoreOlderMessages;
@property (nonatomic, strong, readonly) NSString *accessToken;

+ (instancetype) sharedInstance;
+ (NSString *) instagramClientID;

- (void) deleteMediaItem:(Media *)item;

- (void) requestNewItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;
- (void) requestOldItemsWithCompletionHandler:(NewItemCompletionBlock)completionHandler;

@end
