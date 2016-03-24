//
//  NAWebImageUploaderOperation.m
//  NAWebImageUploader
//
//  Created by zuopengl on 3/14/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#import "NAWebImageUploaderOperation.h"

@implementation NAWebImageUploaderOperation

- (instancetype)init {
    if ((self = [super init])) {
        
    }
    return self;
}


- (instancetype)initWithRequest:(NSURLRequest *)request
                        options:(NAWebImageUploaderOptions)options
                       progress:(NAWebImageUploadProgressBlock)progressBlock
                      completed:(NAWebImageUploadCompletedBlock)completedBlock
                      cancelled:(NAWebImageUploadCancelBlock)cancelBlock {
    if ((self = [self init])) {
        
    }
    return self;
}

@end
