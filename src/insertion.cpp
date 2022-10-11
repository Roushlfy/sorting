#include "insertion.h"

#include "print.h"

void insertion(int* arr, int len) {
    for (int i = 1; i < len; i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && temp < arr[j]) {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = temp;
    }
}