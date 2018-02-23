//
//  NSCalendar+Gregorian.h
//  AstronomyKit
//
//  Created by Joe Blau on 2/22/18.
//

#if defined(__has_feature) && __has_feature(objc_modules)
@import Foundation;
#else
#import <Foundation/Foundation.h>
#endif

@interface NSCalendar (Gregorian)

+ (nonnull instancetype)Gregorian;

@end
