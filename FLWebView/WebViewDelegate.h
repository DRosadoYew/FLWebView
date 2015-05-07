//
//  WebViewDelegate.h
//  FLWebView
//
//  Created by Daniel Rosado on 07/05/15.
//  Copyright (c) 2015 Float Mobile Learning. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol WebViewDelegate <NSObject>

/*
 * This is called whenever the web view wants to navigate. Defaults to YES.
 */
- (BOOL)shouldStartDecidePolicy:(NSURLRequest *)request;

/*
 * This is called whenever the web view has started navigating.
 */
- (void)didStartNavigation;

/*
 * This is called when navigation failed.
 */
- (void)failLoadOrNavigation:(NSURLRequest *)request withError:(NSError *)error;

/*
 * This is called when navigation succeeds and is complete.
 */
- (void)finishLoadOrNavigation:(NSURLRequest *)request;

@end
