#include <stdio.h>
#include <stdlib.h>

//swap function
void swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

//Build min heap
void buildMinHeap(int* arr, int len) {
    for (int i = 1; i < len; i++) {
        int child = i;
        int parent = (child - 1) / 2;
        while (child > 0 && arr[child] < arr[parent]) {
            swap(&arr[child], &arr[parent]);
            child = parent;
            parent = (child - 1) / 2; }
    }
}

//Build max heap
void buildMaxHeap(int* arr, int len) {
    for (int i = 1; i < len; i++) {
        int child = i;
        int parent = (child - 1) / 2;
        while (child > 0 && arr[child] > arr[parent]) {
            swap(&arr[child], &arr[parent]);
            child = parent;
            parent = (child - 1) / 2;
        }
    }
}