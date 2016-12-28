//
//  RITLPublicViewModel.h
//  RITLPhotoDemo
//
//  Created by YueWen on 2016/12/28.
//  Copyright © 2016年 YueWen. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@protocol RITLPublicViewModel <NSObject>

@required

/**
 当前控制的导航标题
 */
@property (nonatomic, copy, readonly) NSString * title;

@end

NS_ASSUME_NONNULL_END
