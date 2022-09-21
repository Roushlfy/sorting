#include "pigeonhole.h"
#include "print.h"
#include <stdio.h>

void pigeonhole(int* arr, int len) {
    // construct an empty array of size 10000
    int lst[10000];
    for (int i = 0; i < 10000; i++) {
        lst[i] = 0;
    }

    // counting 
    for (int i = 0; i < len; i++) {
        lst[arr[i]] += 1;
    }

    int j = 0;
    for (int i = 0; i < 10000; i++) {
        while ((lst[i] != 0) && (j < len)) {
            arr[j] = i;
            lst[i] -= 1;
            j += 1;
        }
    }
}
