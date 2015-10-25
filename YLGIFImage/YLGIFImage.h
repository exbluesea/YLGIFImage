//
//  YLGIFImage.h
//  YLGIFImage
//
//  Created by Yong Li on 14-3-2.
//  Copyright (c) 2014年 Yong Li. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface YLGIFImage : UIImage

///-----------------------
/// @name Image Attributes
///-----------------------

/**
 A C array containing the frame durations.
 
 The number of frames is defined by the count of the `images` array property.
 */
@property (nonatomic, readonly) NSTimeInterval *frameDurations;

/**
 Total duration of the animated image.
 */
@property (nonatomic, readonly) NSTimeInterval totalDuration;

/**
 Number of loops the image can do before it stops
 */
@property (nonatomic, readonly) NSUInteger loopCount;

/**
 Returns the frame with index idx and preloads a few more frames on a background thread.
 */
- (UIImage*)getFrameWithIndex:(NSUInteger)idx
					  preload:(BOOL)shouldPreload;

/**
 Releases all prefeteched frames.
 */
- (void)dropPrefetchedFrames;
@end

@interface YLAPNGImage : YLGIFImage

@end