//
//  Firestack.h
//  Created by Ari Lerner on 5/31/16.
//  Copyright © 2016 Facebook. All rights reserved.
//

#ifndef Firestack_h
#define Firestack_h

#import <UIKit/UIKit.h>

#if __has_include(<React/RCTBridge.h>)
#import <React/RCTBridge.h>
#elif __has_include("RCTBridge.h")
#import "RCTBridge.h"
#else
#import "React/RCTBridge.h"   // Required when used as a Pod in a Swift project
#endif

#if __has_include(<React/RCTEventDispatcher.h>)
#import <React/RCTEventDispatcher.h>
#elif __has_include("RCTEventDispatcher.h")
#import "RCTEventDispatcher.h"
#else
#import "React/RCTEventDispatcher.h"   // Required when used as a Pod in a Swift project
#endif

#if __has_include(<React/RCTEventEmitter.h>)
#import <React/RCTEventEmitter.h>
#elif __has_include("RCTEventEmitter.h")
#import "RCTEventEmitter.h"
#else
#import "React/RCTEventEmitter.h"   // Required when used as a Pod in a Swift project
#endif

@interface Firestack : RCTEventEmitter <RCTBridgeModule> {
}

// + (void) registerForNotification:(NSString *) typeStr andToken:(NSData *)deviceToken;
+ (void) setup:(UIApplication *) application
withLaunchOptions: (NSDictionary *) launchOptions;

+ (id) sharedInstance;

- (void) debugLog:(NSString *)title
              msg:(NSString *)msg;

- (void) sendJSEvent:(NSString *)title
               props:(NSDictionary *)props;


@property (nonatomic) BOOL debug;
@property (atomic) BOOL configured;
@property (nonatomic, strong) NSDictionary *configuration;

@end

#endif
