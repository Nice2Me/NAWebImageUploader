//
//  NAWebImageBlocks.h
//  NAWebImageUploader
//
//  Created by zuopengl on 3/14/16.
//  Copyright © 2016 Apple. All rights reserved.
//

#ifndef NAWebImageBlocks_h
#define NAWebImageBlocks_h

#define safe_condition_block(predicate, block, ...) do { if (predicate) { block ? block(__VA_ARGS__) : nil; }} while(FALSE)
#define safe_block(block, ...)                      safe_condition_block(YES, block, __VA_ARGS__)
#define safe_dispatch_sync(queue, block, ...)       dispatch_sync(queue, ^{ safe_block(block, __VA_ARGS__); })
#define safe_dispatch_sync_main(block, ...)         safe_dispatch_sync(dispatch_get_main_queue(), block, __VA_ARGS__)
#define safe_dispatch_async(queue, block, ...)      dispatch_async(queue, ^{ safe_block(block, __VA_ARGS__); })
#define safe_dispatch_async_main(block, ...)        safe_dispatch_async(dispatch_get_main_queue(), block, __VA_ARGS__)

#endif /* NAWebImageBlocks_h */
