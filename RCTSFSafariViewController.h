#import <React/RCTBridgeModule.h>
#import <React/RCTConvert.h>
#import <React/RCTEventDispatcher.h>
#import <UIKit/UIKit.h>

@import SafariServices;

FOUNDATION_EXPORT NSString *const kCloseSFController;

@interface RCTSFSafariViewController : NSObject <RCTBridgeModule, SFSafariViewControllerDelegate>
@end
