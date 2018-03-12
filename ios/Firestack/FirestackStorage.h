//
//  FirestackStorage.h
//  Firestack
//
//  Created by Ari Lerner on 8/24/16.
//  Copyright © 2016 Facebook. All rights reserved.
//

#ifndef FirestackStorage_h
#define FirestackStorage_h

#import "Firebase.h"

#if __has_include(<React/RCTBridge.h>)
#import <React/RCTBridge.h>
#elif __has_include("RCTBridge.h")
#import "RCTBridge.h"
#else
#import "React/RCTBridge.h"   // Required when used as a Pod in a Swift project
#endif

#if __has_include(<React/RCTEventEmitter.h>)
#import <React/RCTEventEmitter.h>
#elif __has_include("RCTEventEmitter.h")
#import "RCTEventEmitter.h"
#else
#import "React/RCTEventEmitter.h"   // Required when used as a Pod in a Swift project
#endif

@interface FirestackStorage : RCTEventEmitter <RCTBridgeModule> {

}

@property (nonatomic) NSString *_storageUrl;

@end

#endif
