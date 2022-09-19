#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <iostream>

#include "merge.h"
#include "print.h"
#include "selection.h"

using namespace std;

void test_merge();
void test_selection();
void large_scale();

int main() {
    srand(time(0));
    // test_selection();
    cout << setfill('*') << setw(10) << "";
    cout << endl;
    // test_merge();
    cout << setfill('*') << setw(10) << "";
    cout << endl;
    large_scale();

    return 0;
}

void test_merge() {
    clock_t t;
    int n;
    int repeat, repeat_times = 10;
    int scale[] = {10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000, 20000, 50000};  // len 12

    cout << "Repeated times:" << repeat_times << endl;

    for (n = 0; n < 12; ++n) {
        // generate data
        int data[scale[n]];
        for (int i = 0; i < scale[n]; i++) {
            data[i] = rand() % 10000;
        }

        // sort data
        t = clock();
        for (repeat = 0; repeat < repeat_times; ++repeat) {
            merge_sort(data, 0, scale[n] - 1);
        }
        t = clock() - t;

        std::cout << "Merge sort " << scale[n] << " elements "
                  << "average time: " << ((float)t) / CLOCKS_PER_SEC / repeat_times << std::endl;
    }
}

void test_selection() {
    clock_t t;
    int n;
    int repeat, repeat_times = 10;
    int scale[] = {10, 20, 50, 100, 200, 500, 1000, 2000, 5000, 10000, 20000, 50000};  // len 12

    cout << "Repeated times:" << repeat_times << endl;

    for (n = 0; n < 12; ++n) {
        // generate data
        int data[scale[n]];
        for (int i = 0; i < scale[n]; i++) {
            data[i] = rand() % 10000;
        }

        // sort data
        t = clock();
        for (repeat = 0; repeat < repeat_times; ++repeat) {
            selection_sort(data, scale[n] - 1);
        }
        t = clock() - t;

        std::cout << "Selection sort " << scale[n] << " elements "
                  << "average time: " << ((float)t) / CLOCKS_PER_SEC / repeat_times << std::endl;
    }
}

void large_scale() {
    cout << "Perform sorting on a large scale of numbers.\n";
    clock_t t;
    int n;
    int repeat, repeat_times = 10;
    int scale[] = {10000, 20000, 30000, 40000, 50000, 60000, 70000, 80000, 90000, 100000};  // len 10
    cout << "Repeated times:" << repeat_times << endl;

    for (n = 0; n < 10; ++n) {
    int data[scale[n]];
        for (int i = 0; i < scale[n]; i++) {
            data[i] = rand() % 10000;
        }
    
        // merge sort
        t = clock();
        for (repeat = 0; repeat < repeat_times; ++repeat) {
            merge_sort(data, 0, scale[n] - 1);
        }
        t = clock() - t;

        std::cout << "Merge sort " << scale[n] << " elements "
                  << "average time: " << ((float)t) / CLOCKS_PER_SEC / repeat_times << std::endl;
    }

    for (n = 0; n < 10;++n){
    int data[scale[n]];
        for (int i = 0; i < scale[n]; i++) {
            data[i] = rand() % 10000;
        }
        // selection sort
        t = clock();
        for (repeat = 0; repeat < repeat_times; ++repeat) {
            selection_sort(data, scale[n] - 1);
        }
        t = clock() - t;

        std::cout << "Selection sort " << scale[n] << " elements "
                  << "average time: " << ((float)t) / CLOCKS_PER_SEC / repeat_times << std::endl;
    }
}