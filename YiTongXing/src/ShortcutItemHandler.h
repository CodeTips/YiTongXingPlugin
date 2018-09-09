#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@interface ShortcutItemHandler : NSObject

@property (nonatomic, assign)BOOL background;

+ (instancetype)sharedHandler;
- (void)addShortcutItems;
- (BOOL)handleShortcutItem:(UIApplicationShortcutItem*)shortcutItem;

@end
