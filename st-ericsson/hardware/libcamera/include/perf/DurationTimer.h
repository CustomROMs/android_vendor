// ------------------------------------------------------------------
// C++ API

#ifdef __cplusplus

namespace android {
/*
 * Time the duration of something.
 *
 * Includes some timeval manipulation functions.
 */
class DurationTimer {
public:
    DurationTimer() {}
    ~DurationTimer() {}

    // Start the timer.
    void start();
    // Stop the timer.
    void stop();
    // Get the duration in microseconds.
    long long durationUsecs() const;

    // Subtract two timevals.  Returns the difference (ptv1-ptv2) in
    // microseconds.
    static long long subtractTimevals(const struct timeval* ptv1,
        const struct timeval* ptv2);

    // Add the specified amount of time to the timeval.
    static void addToTimeval(struct timeval* ptv, long usec);

private:
    struct timeval  mStartWhen;
    struct timeval  mStopWhen;
};

}; // android
#endif // def __cplusplus

