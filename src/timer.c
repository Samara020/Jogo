#include <sys/time.h>
#include <stddef.h> 
#include "timer.h"

static struct timeval startTime;
static int timerDuration = 0;

void timerInit(int valueMilliSec) {
    gettimeofday(&startTime, NULL);
    timerDuration = valueMilliSec;
}

void timerDestroy() {
}

void timerUpdateTimer(int valueMilliSec) {
    timerDuration = valueMilliSec;
}

int timerTimeOver() {
    struct timeval now;
    gettimeofday(&now, NULL);

    long elapsed = (now.tv_sec - startTime.tv_sec) * 1000 +
                   (now.tv_usec - startTime.tv_usec) / 1000;

    return elapsed >= timerDuration;
}

void timerPrint() {
}
