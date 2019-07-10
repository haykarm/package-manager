//
//  KMZCanvasView.h
//  KMZDraw
//
//  Created by Kentaro Matsumae on 12/06/09.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KMZFrame.h"
@import UIKit;

@class KMZDrawView;

@protocol KMZDrawViewDelegate
- (void)drawView:(KMZDrawView*)drawView finishDrawLine:(KMZLine*)line;
@end

@interface KMZDrawView : UIImageView

@property (nonatomic, weak) id<KMZDrawViewDelegate> delegate;

@property (nonatomic) NSInteger numberOfPoints;

- (void)setPenMode:(KMZLinePenMode)penMode;
- (void)undo;
- (void)redo;
- (void)clear;
- (BOOL)isUndoable;
- (BOOL)isRedoable;

@end
