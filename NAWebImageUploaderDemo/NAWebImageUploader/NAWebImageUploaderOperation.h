//
//  NAWebImageUploaderOperation.h
//  NAWebImageUploader
//
//  Created by zuopengl on 3/14/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "NAImports.h"
#import "NAWebImageUploader.h"

@interface NAWebImageUploaderOperation : NSOperation <NAWebImageOperationDelegate>

- (instancetype)initWithRequest:(NSURLRequest *)request
                        options:(NAWebImageUploaderOptions)options
                       progress:(NAWebImageUploadProgressBlock)progressBlock
                      completed:(NAWebImageUploadCompletedBlock)completedBlock
                      cancelled:(NAWebImageUploadCancelBlock)cancelBlock;

@end
