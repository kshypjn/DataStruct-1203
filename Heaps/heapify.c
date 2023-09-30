#include <stdio.h>
#include <stdlib.h>

void swap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

//Heapify min heap
void heapifyMin(int* arr, int len, int rootIndex) {
    int smol = rootIndex;
    int left = 2 * rootIndex + 1;
    int right = 2 * rootIndex + 2;
    if (left < len && arr[left] < arr[smol])
        smol = left;
    if (right < len && arr[right] < arr[smol])
        smol = right;
    if (smol != rootIndex) {
        swap(&arr[rootIndex], &arr[smol]);
        heapifyMin(arr, len, smol);
    }

}

//Heapify max heap
void heapifyMax(int* arr, int len, int rootIndex) {
    int hugeee = rootIndex;
    int left = 2 * rootIndex + 1;
    int right = 2 * rootIndex + 2;
    if (left < len && arr[left] > arr[hugeee])
        hugeee = left;
    if (right < len && arr[right] > arr[hugeee])
        hugeee = right;
    if (hugeee != rootIndex) {
        swap(&arr[rootIndex], &arr[hugeee]);
        heapifyMax(arr, len, hugeee);
    }

}