#include<iostream>
#include "selection.h"
#include "print.h"

using namespace std;

int selection_drive(){
    int n;
    cin >> n;
    int i = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        arr[i] = ele;
    }

    selection_sort(arr, n);
    
    print_array(arr, n);

    return 0;
}

void selection_sort(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++) {
            if (arr[j+i] < arr[i])
            {
                int temp = arr[j+i];
                arr[j+i] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

