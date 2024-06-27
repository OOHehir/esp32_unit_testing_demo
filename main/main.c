#include <stdio.h>
#include "average.h"

void app_main(void) {
    int avg = average(10, 20);
    printf("Average: %d\n", avg);
}
