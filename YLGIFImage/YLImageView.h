//
//  YLImageView.h
//  YLGIFImage
//
//  Created by Yong Li on 14-3-2.
//  Copyright (c) 2014年 Yong Li. All rights reserved.
//

#import <UIKit/UIKit.h>


@class YLImageView;


@protocol YLImageViewDelegate <NSObject>
@optional
- (void)gifImageView:(YLImageView*)view didShowFrameIndex:(NSUInteger)frameIdx;
- (void)gifImageViewDidStartAnimating:(YLImageView*)view;
- (void)gifImageViewDidStopAnimating:(YLImageView*)view;
@end

IB_DESIGNABLE
@interface YLImageView : UIImageView

@property (nonatomic, copy) NSString *runLoopMode;
@property (nonatomic, weak) id<YLImageViewDelegate> delegate;
@property (nonatomic, copy) IBInspectable NSString *imageName;

-(void)showFrameIndex:(NSUInteger)frameNumber;

@end
