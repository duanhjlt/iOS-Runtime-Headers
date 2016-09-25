/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface _NSAutoCalendar : NSCalendar {
    NSCalendar * cal;
    unsigned int  changedFirstWeekday;
    NSDate * changedGregorianStartDate;
    NSLocale * changedLocale;
    unsigned int  changedMinimumDaysinFirstWeek;
    NSTimeZone * changedTimeZone;
}

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (BOOL)supportsSecureCoding;

- (id)_init;
- (void)_update:(id)arg1;
- (id)calendarIdentifier;
- (Class)classForCoder;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2;
- (id)components:(unsigned int)arg1 fromDate:(id)arg2 toDate:(id)arg3 options:(unsigned int)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateByAddingComponents:(id)arg1 toDate:(id)arg2 options:(unsigned int)arg3;
- (id)dateFromComponents:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateDatesStartingAfterDate:(id)arg1 matchingComponents:(id)arg2 options:(unsigned int)arg3 usingBlock:(id /* block */)arg4;
- (unsigned int)firstWeekday;
- (id)gregorianStartDate;
- (id)init;
- (id)initWithCalendarIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isDateInWeekend:(id)arg1;
- (id)locale;
- (struct _NSRange { unsigned int x1; unsigned int x2; })maximumRangeOfUnit:(unsigned int)arg1;
- (unsigned int)minimumDaysInFirstWeek;
- (struct _NSRange { unsigned int x1; unsigned int x2; })minimumRangeOfUnit:(unsigned int)arg1;
- (BOOL)nextWeekendStartDate:(out id*)arg1 interval:(out double*)arg2 options:(unsigned int)arg3 afterDate:(id)arg4;
- (unsigned int)ordinalityOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeOfUnit:(unsigned int)arg1 inUnit:(unsigned int)arg2 forDate:(id)arg3;
- (BOOL)rangeOfUnit:(unsigned int)arg1 startDate:(id*)arg2 interval:(double*)arg3 forDate:(id)arg4;
- (void)setFirstWeekday:(unsigned int)arg1;
- (void)setGregorianStartDate:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setMinimumDaysInFirstWeek:(unsigned int)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end