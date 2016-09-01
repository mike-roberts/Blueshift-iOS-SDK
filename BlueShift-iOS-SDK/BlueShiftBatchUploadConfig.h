//
//  BlueShiftBatchUploadConfig.h
//  Pods
//
//  Created by Shahas on 27/08/16.
//
//

#import <Foundation/Foundation.h>

@interface BlueShiftBatchUploadConfig : NSObject

// Property hold periodic intervell in which batch uploader will envoke(in seconds)
@property double batchUploadTimer;

// Create shared instance of BlueShiftBatchUploadConfig
+ (instancetype) sharedInstance;

// Method to set intervell timer (in seconds)
- (void)setBatchUploadTimer:(double)batchUploadTimer;

// Method to get intervell timer
- (double)fetchBatchUploadTimer;

@end
