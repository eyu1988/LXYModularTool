//
//  NSString+IdCardInfo.h
//  TreatHeart_Patient
//
//  Created by yuy03 on 2018/5/7.
//  Copyright © 2018年 bluemobi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (IdCardInfo)
- (NSString *)getBirthDay;
- (NSString *)getSex;
- (NSString *)getAge;
@end
