//
//  YunDunYYJManager.h
//  YunDunSDK
//
//  Created by YY on 2017/7/3.
//  Copyright © 2017年 上海云盾信息技术有限公司. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface YyjManager: NSObject
/**
 根据AppKey初始化SDK
 @param appKey 应用所对应的AppKey
 */
-(void)initWithAppKey:(NSString *)appKey;

+ (YyjManager *)sharedYyjManager;

@end
