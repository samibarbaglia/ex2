#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#include "generator.h"
#include "error_check.h"

int main(int argc, char *argv[]) {

    is_enough_values(argc, *argv);
   
    int min = atoi(argv[1]);
    int max = atoi(argv[2]);
    int count = atoi(argv[3]);

    printf("1: %d, 2: %d, 3: %d\n", min, max, count);

    generate_random(min, max, count);

    return 0;
}