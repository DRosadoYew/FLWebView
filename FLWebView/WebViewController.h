//  ViewController.h
//  FLWebView
//
//  Created by Steve Richey on 11/21/14.
//  Copyright (c) 2014 Float Mobile Learning. Shared under an MIT license. See license.md for details.
//

// Note: Changed by Daniel Rosado. Forked as https://github.com/DRosadoYew/FLWebView.git

// Needed for UIViewController, UIWebViewDelegate, and UIView
#import <UIKit/UIKit.h>
// Needed for WKNavigationDelegate and WKUIDelegate
#import <WebKit/WebKit.h>
// Used to define the webView property below
#import "FLWebViewProvider.h"

#import "WebViewDelegate.h"

/**
 * This is the view controller for the main interface.
 * It also acts as a delegate for the web view.
 */
@interface WebViewController : UIViewController <UIWebViewDelegate, WKNavigationDelegate, WKUIDelegate>

// The main web view that is set up in the viewDidLoad method.
@property (nonatomic, readonly) UIView <FLWebViewProvider> *webView;

/**
 *  Delegate with generic methods from the webview, being it a WKWebView or a UIWebView.
 */
@property (nonatomic, readwrite, unsafe_unretained) id <WebViewDelegate> webViewDelegate;

/**
 *  When enabled presents a UIActivityIndicator while the webview is loading a new page.
 */
@property (nonatomic, readwrite) BOOL enableLoadingView;

@property (nonatomic, readwrite) UIColor *backgroundColor;

/**
 *  When enableLoadingView is set to true this block is called with an activity indicator styled as UIActivityIndicatorViewStyleWhiteLarge and centered on the webview. Perform whatever changes you wish and return it or simply return your own view.
 Note: The UIActivityIndicator will be used when this property is undefined and enableLoadingView is set to true.
 */
@property (nonatomic, readwrite, copy) UIView *(^LoadingViewBlock)(UIView *activityIndicator);

// Designated initializer
- (instancetype)initWithURL:(NSString *)url;

@end
