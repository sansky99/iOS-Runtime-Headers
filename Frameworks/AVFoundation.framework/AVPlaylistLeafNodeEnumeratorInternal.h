/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlaylistLeafNodeEnumeratorInternal : NSObject {
    id /* block */  completionHandler;
    int  direction;
    struct OpaqueFigPlaylistEnumerator { } * figEnumerator;
    struct OpaqueFigPlaylist { } * figPlaylist;
    <AVPlaylistNode> * firstNode;
    int  maximumNodeCount;
    AVCMNotificationDispatcher * notificationDispatcher;
    id /* block */  perItemBlock;
    AVWeakReference * weakSelf;
}

@end
