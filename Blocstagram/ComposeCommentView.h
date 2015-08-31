//
//  ComposeCommentView.h
//  Blocstagram
//
//  Created by psytronx on 8/30/15.
//  Copyright (c) 2015 Logical Dimension. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ComposeCommentView;

// The compose comment view's delegate protocol will inform its delegate when the user starts editing,
// updates the text, or presses the comment button.
@protocol ComposeCommentViewDelegate <NSObject>

- (void) commentViewDidPressCommentButton:(ComposeCommentView *)sender;
- (void) commentView:(ComposeCommentView *)sender textDidChange:(NSString *)text;
- (void) commentViewWillStartEditing:(ComposeCommentView *)sender;

@end

@interface ComposeCommentView : UIView

@property (nonatomic, weak) NSObject <ComposeCommentViewDelegate> *delegate;

@property (nonatomic, assign) BOOL isWritingComment; // Determines whether the user is currently editing a comment.

@property (nonatomic, strong) NSString *text; // Contains the text of the comment, and will allow an external controller to set text.

- (void) stopComposingComment; // A controller can call stopComposingComment to end composition and dismiss the keyboard.

@end