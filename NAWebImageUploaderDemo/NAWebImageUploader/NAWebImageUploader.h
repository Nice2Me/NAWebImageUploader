//
//  NAWebImageUploader.h
//  NAWebImageUploader
//
//  Created by zuopengl on 3/14/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "NAImports.h"


extern NSString *const NAWebImageErrorDomain;

typedef NS_ENUM(NSInteger, NAWebImageUploaderOptions) {
    kNAWebImageUploaderNone,
};


typedef NS_ENUM(NSInteger, NAWebImageUploaderOrder) {
    kNAWebImageUploaderOrderForFIFO,
    kNAWebImageUploaderOrderForLIFO,
};


@class NAWebImageUploaderOperation;
/**
 *  Block alias
 */
typedef void (^NAWebImageNoParamBlock)();
typedef void (^NAWebImageUploadProgressBlock)(NSInteger countOfOneSend, NSInteger countOfSend, NSInteger countOfExpectedToSent);
typedef void (^NAWebImageUploadCompletedBlock)(UIImage *originalImage, NAWebImageUploaderOperation *operation, id responseObject, NSError *error);
typedef NAWebImageNoParamBlock NAWebImageUploadCancelBlock;


@interface NAWebImageUploader : NSObject

/**
 *  Options for uploader policy
 */
@property (nonatomic, assign) NAWebImageUploaderOptions options;
@property (nonatomic, assign) NAWebImageUploaderOrder   order;

@property (nonatomic, assign) NSUInteger countOfMaxConcurrent;
@property (nonatomic, assign, readonly) NSUInteger countOfCurrentConcurrent;

+ (instancetype)sharedUploader;

- (id<NAWebImageOperationDelegate>)uploadImage:(UIImage *)image toURL:(NSURL *)url options:(NAWebImageUploaderOptions)options progress:(NAWebImageUploadProgressBlock)progressBlock completion:(NAWebImageUploadCompletedBlock)completedBlock;
@end
