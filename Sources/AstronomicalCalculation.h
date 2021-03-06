//
//  Calculations.h
//  AstronomyKit
//
//  Created by Joe Blau on 2/22/18.
//

#if defined(__has_feature) && __has_feature(objc_modules)
@import Foundation;
@import CoreLocation;
#else
#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#endif

@interface AstronomicalCalculation : NSObject

#pragma mark - Lunar Calculations
+ (nullable NSDate *)lunarRiseDateWithDate:(nonnull NSDate *)date location:(CLLocationCoordinate2D)location;

+ (nonnull NSDate *)lunarTransitDateWithDate:(nonnull NSDate *)date location:(CLLocationCoordinate2D)location;

+ (nullable NSDate *)lunarSetDateWithDate:(nonnull NSDate *)date location:(CLLocationCoordinate2D)location;

+ (nonnull NSDate *)dateForTrueLunarPhase:(double)phase withDate:(nonnull NSDate *)date;

+ (double)lunarPhaseAngleWithDate:(nonnull NSDate *)date;

+ (double)lunarPositionAngleWithDate:(nonnull NSDate *)date;

+ (double)lunarPhaseWithDate:(nonnull NSDate *)date;

#pragma mark - Solar calculations

+ (nullable NSDate *)solarRiseDateWithDate:(nonnull NSDate *)date location:(CLLocationCoordinate2D)location;

+ (nonnull NSDate *)solarTransitDateWithDate:(nonnull NSDate *)date location:(CLLocationCoordinate2D)location;

+ (nullable NSDate *)solarSetDateWithDate:(nonnull NSDate *)date location:(CLLocationCoordinate2D)location;

@end
