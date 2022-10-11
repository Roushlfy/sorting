#include "merge.h"
#include "pigeonhole.h"
#include "insertion.h"
#include "print.h"
#include "selection.h"

#include <stdio.h>

void test_pigeonhole();
void test_insertion();

int main(int argc, char* argv[]) {
    // test pigeonhole sorting algorithm
    // test_pigeonhole();
    // test insertion sorting algorithm
    test_insertion();

    return 0;
}

void test_pigeonhole() {
    // input data
    int len;
    scanf("%d", &len);
    int arr[len];
    for (int i = 0; i < len; i++) {
        scanf("%d", &arr[i]);
    }
    // pigeon hole sort
    pigeonhole(arr, len);

    print_array(arr, len);
}

void test_insertion() {
//     int len;
//     scanf("%d", &len);
//     int arr[len];
//     for (int i = 0; i < len; i++) {
//         scanf("%d", &arr[i]);
//     }

    int arr[] = {3, 234, 1324, 32, 324, 324, 323};
    int len = 7;
    // pigeon hole sort
    insertion(arr, len);

    print_array(arr, len);
}