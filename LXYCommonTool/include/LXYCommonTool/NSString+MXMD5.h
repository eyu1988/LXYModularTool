//
//  NSString+MXMD5.h
//  XinAnDaApp
//
//  Created by Lucas on 2017/8/3.
//  Copyright © 2017年 bluemobi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (MXMD5)

/**
 *  字符串的MD5 32位 小写处理
 *
 *  @return MD5处理后的字符串
 */
- (NSString *)MXMD5ForLower32Bit;

/**
 *  字符串的MD5 32位 大写处理
 *
 *  @return MD5处理后的字符串
 */
- (NSString *)MXMD5ForUpper32Bit;

/**
 *  字符串的MD5 16位 小写处理
 *
 *  @return MD5处理后的字符串
 */
- (NSString *)MXMD5ForLower16Bit;

/**
 *  字符串的MD5 16位 大写处理
 *
 *  @return MD5处理后的字符串
 */
- (NSString *)MXMD5ForUpper16Bit;

@end
