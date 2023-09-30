//Extract min element from min heap
int extractMin(int* arr, int* len) {
    if (*len == 0) {
        return 0;
    }
    int min = arr[0];
    arr[0] = arr[*len - 1];
    (*len)--;
    heapifyMin(arr, *len, 0);
    return min;

}

//Extract max element from max heap
int extractMax(int* arr, int* len) {
    if (*len == 0) {
        return 0;
    }
    int max = arr[0];
    arr[0] = arr[*len - 1];
    (*len)--;
    heapifyMax(arr, *len, 0);
    return max;

}