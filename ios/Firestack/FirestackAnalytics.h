//
//  FirestackAnalytics.h
//  Firestack
//
//  Created by Ari Lerner on 8/23/16.
//  Copyright © 2016 Facebook. All rights reserved.
//

#ifndef FirestackAnalytics_h
#define FirestackAnalytics_h

#if __has_include(<React/RCTBridge.h>)
#import <React/RCTBridge.h>
#elif __has_include("RCTBridge.h")
#import "RCTBridge.h"
#else
#import "React/RCTBridge.h"   // Required when used as a Pod in a Swift project
#endif

@interface FirestackAnalytics : NSObject <RCTBridgeModule> {

}

@end

#endif
