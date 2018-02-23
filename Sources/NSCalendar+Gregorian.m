//
//  NSCalendar+Gregorian.m
//  AstronomyKit
//
//  Created by Joe Blau on 2/22/18.
//

#import "NSCalendar+Gregorian.h"

static NSString *const NSCalendarGregorianKey = @"com.bodlog.AstronomyKit.SharedGregorianCalendar";


@implementation NSCalendar (Gregorian)

+ (instancetype)Gregorian {
    NSMutableDictionary *dictionary = NSThread.currentThread.threadDictionary;
    NSCalendar *calendar = dictionary[NSCalendarGregorianKey];
    if (calendar == nil) {
        calendar = [NSCalendar calendarWithIdentifier:NSCalendarIdentifierGregorian];
        dictionary[NSCalendarGregorianKey] = calendar;
    }
    return calendar;
}


@end
