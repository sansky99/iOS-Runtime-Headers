/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIWebViewScrollViewDelegateForwarder : NSObject <UIScrollViewDelegate> {
    <UIScrollViewDelegate> * _delegate;
    UIWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIScrollViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic) UIWebView *webView;

- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWebView:(id)arg1;
- (id)webView;

@end
