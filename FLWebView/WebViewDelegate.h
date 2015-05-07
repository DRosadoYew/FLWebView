//
//  WebViewDelegate.h
//  FLWebView
//
//  Created by Daniel Rosado on 07/05/15.
//  Copyright (c) 2015 Float Mobile Learning. All rights reserved.
//

@import Foundation;
@import UIKit.UIView;
#import "FLWebViewProvider.h"

@protocol WebViewDelegate <NSObject>

/*
 * This is called whenever the web view wants to navigate. Defaults to YES.
 */
@optional
- (BOOL)webView:(UIView<FLWebViewProvider> *)webView shouldStartDecidePolicy:(NSURLRequest *)request;

/*
 * This is called whenever the web view has started navigating.
 */
@optional
- (void)didStartNavigationForWebView:(UIView<FLWebViewProvider> *)webView;

/*
 * This is called when navigation failed.
 */
@optional
- (void)webView:(UIView<FLWebViewProvider> *)webView failLoadOrNavigation:(NSURLRequest *)request withError:(NSError *)error;

/*
 * This is called when navigation succeeds and is complete.
 */
@optional
- (void)webView:(UIView<FLWebViewProvider> *)webView finishLoadOrNavigation:(NSURLRequest *)request;

@end
