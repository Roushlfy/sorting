#include "quick.h"

#include <ctime>
#include <iostream>
#include <random>

template <typename T, typename P>
void quick_sort(T* arr, P low, P high) {
    if (low < high) {
        /* pi is the index of the partitioned element
        arr[pi] is already in right position.
        */
        P pi = partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

template <typename T, typename P>
T partition(T* arr, P low, P high) {
    // choose the end of the array to be the pivot
    // can be optimized by choosing a random element
    T pivot = arr[high];
    /** i is the index of the smaller element*/
    P i = low - 1;
    for (P j = low; j < high ; ++j) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int main() {
    srand(time(0));
    int size = 1000000;
    int arr[size];
    for (size_t i = 0; i < size; i++) {
        arr[i] = rand() % 10000000;
    }

    quick_sort(arr, 0, size - 1);

    for (size_t i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }
    return 0;
}
