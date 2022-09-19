#include <iostream>
#include "print.h"

void print_array(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
}