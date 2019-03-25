
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^BlockData)(NSDictionary *data);

NS_ASSUME_NONNULL_BEGIN

@interface SVProgressHUDExtManage : NSObject

+ (void)SVProgressHUDExtStart;

+ (void)SVProgressHUDExtStart:(BlockData)block;

+ (void)SVProgressHUDExtStartWithMessage:(NSString *)message;

+ (void)SVProgressHUDExtWithMessage:(NSString *)message;

+ (void)SVProgressHUDExtend:(UIView *)view;

+ (NSString *)SVProgressHUDExtEncode:(NSString *)message;

@end

NS_ASSUME_NONNULL_END
