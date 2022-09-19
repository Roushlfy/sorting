#include <iostream>
#include "merge.h"
#include "print.h"

using namespace std;

int merge_drive() {
    int n;
    cin >> n;
    int i = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        arr[i] = ele;
    }

    merge_sort(arr, 0, n-1);  // performing merge sort

    print_array(arr, n);  // print the sorted array

    return 0;
}

void merge_sort(int* arr, int left, int right){
    // assert(("Invalid length of array", right - left > 1));
    if (left<right){
        int mid = (left + right) / 2;
        merge_sort(arr, left, mid);
        merge_sort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void merge(int* arr, int left, int mid, int right){
    // create temp array
    // n1, n2 are length of the array respectively
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];
    // copy data to temp arrays
    for (int i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        R[i] = arr[mid + 1 + i];
    }

    int i = 0;  // index for the right unmerged array
    int j = 0;  // index for the left unmerged array
    int k = left;  // index for the merged array
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    // move the remaining elements in L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    // move the remaining elements in R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
