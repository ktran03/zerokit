#import <Cocoa/Cocoa.h>

#define ZeroKitLocalizedString(string) NSLocalizedString(string, string)
#define ZeroKitLocalizedStringFromCurrentBundle(string) NSLocalizedStringFromTableInBundle(string, nil, [NSBundle bundleForClass: [self class]], string)

#pragma mark -

@class ZeroKitProcess;

@interface ZeroKitUtilities : NSObject {
    
}

+ (NSBundle *)applicationBundle;

#pragma mark -

+ (NSString *)applicationVersion;

#pragma mark -

+ (void)registerDefaultsForBundle: (NSBundle *)bundle;

#pragma mark -

+ (NSString *)applicationSupportPathForBundle: (NSBundle *)bundle;

#pragma mark -

+ (NSString *)pathForPreferencePaneNamed: (NSString *)preferencePaneName;

#pragma mark -

+ (BOOL)isLoginItemEnabledForBundle: (NSBundle *)bundle;

#pragma mark -

+ (void)enableLoginItemForBundle: (NSBundle *)bundle;

+ (void)disableLoginItemForBundle: (NSBundle *)bundle;

#pragma mark -

+ (NSImage *)imageFromResource: (NSString *)resource inBundle: (NSBundle *)bundle;

#pragma mark -

+ (BOOL)isStringEmpty: (NSString *)string;

@end
