//
//  LXYCacheManager.h
//  LXYCacheManager
//
//  Created by Lucas on 2018/9/18.
//  Copyright © 2018年 lucas. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LXYCacheManager : NSObject


/**
 计算单个文件大小

 @param path 文件路径字符串
 @return 文件占用空间大小float值
 */
+ (float)fileSizeAtPath:(NSString *)path;


/**
 计算目录大小

 @param path 目录路径字符串
 @return 占用空间大小float值
 */
+ (float)folderSizeAtPath:(NSString *)path;


/**
 清理缓存文件

 @param path 路径字符串
 */
+ (void)clearCache:(NSString *)path;

@end
