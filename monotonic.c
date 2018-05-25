#include <stdio.h>
#include <inttypes.h>
#include <mach/mach_time.h>

// Outputs miliseconds of a monotonic clock; an ever-increasing counter.
// https://stackoverflow.com/a/39163567
int main ( ) {
    uint64_t clockTicksSinceSystemBoot = mach_absolute_time();

    static mach_timebase_info_data_t timebase;
    mach_timebase_info(&timebase);
    // Cast to double is required to make this a floating point devision,
    // otherwise it would be an interger division and only the result would
    // be converted to floating point!
    double clockTicksToNanosecons = (double)timebase.numer / timebase.denom;

    uint64_t systemUptimeNanoseconds = (uint64_t)(
        clockTicksToNanosecons * clockTicksSinceSystemBoot
    );
    uint64_t systemUptimeMs = systemUptimeNanoseconds / (1000 * 1000);
    printf("%"PRIu64"\n", systemUptimeMs);
}

