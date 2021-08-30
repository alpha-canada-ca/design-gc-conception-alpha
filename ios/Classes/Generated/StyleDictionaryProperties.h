
//
// StyleDictionaryProperties.h
//

// Do not edit directly
// Generated on Thu, 26 Aug 2021 17:33:02 GMT


#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface StyleDictionaryProperties : NSObject

+ (NSDictionary *)properties;
+ (NSDictionary *)getProperty:(NSString *)keyPath;
+ (nonnull)getValue:(NSString *)keyPath;

@end
