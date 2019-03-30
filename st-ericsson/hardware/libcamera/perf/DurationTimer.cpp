/*
 * ===========================================================================
 *      DurationTimer
 * ===========================================================================
 */

#include <limits.h>
#include <sys/time.h>
#include <time.h>

#include <cutils/log.h>
#include <DurationTimer.h>

using namespace android;

// Start the timer.
void DurationTimer::start(void)
{
    gettimeofday(&mStartWhen, NULL);
}

// Stop the timer.
void DurationTimer::stop(void)
{
    gettimeofday(&mStopWhen, NULL);
}

// Get the duration in microseconds.
long long DurationTimer::durationUsecs(void) const
{
    return (long) subtractTimevals(&mStopWhen, &mStartWhen);
}

// Subtract two timevals.  Returns the difference (ptv1-ptv2) in
// microseconds.
/*static*/ long long DurationTimer::subtractTimevals(const struct timeval* ptv1,
    const struct timeval* ptv2)
{
    long long stop  = ((long long) ptv1->tv_sec) * 1000000LL +
                      ((long long) ptv1->tv_usec);
    long long start = ((long long) ptv2->tv_sec) * 1000000LL +
                      ((long long) ptv2->tv_usec);
    return stop - start;
}

// Add the specified amount of time to the timeval.
/*static*/ void DurationTimer::addToTimeval(struct timeval* ptv, long usec)
{
    if (usec < 0) {
        ALOGW("Negative values not supported in addToTimeval\n");
        return;
    }

    // normalize tv_usec if necessary
    if (ptv->tv_usec >= 1000000) {
        ptv->tv_sec += ptv->tv_usec / 1000000;
        ptv->tv_usec %= 1000000;
    }

    ptv->tv_usec += usec % 1000000;
    if (ptv->tv_usec >= 1000000) {
        ptv->tv_usec -= 1000000;
        ptv->tv_sec++;
    }
    ptv->tv_sec += usec / 1000000;
}


