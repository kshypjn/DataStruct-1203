//Insert element in min heap, hint: use realloc
int* insertMinHeap(int* arr, int* len, int val) {
    arr = (int*)realloc(arr, (*len + 1) * sizeof(int));
    arr[*len] = val;
    (*len)++;
    int child = *len - 1;
    int parent = (child - 1) / 2;
    while (child > 0 && arr[child] < arr[parent]) {
        swap(&arr[child], &arr[parent]);
        child = parent;
        parent = (child - 1) / 2;
    }
    return arr;
}

//Insert element in max heap, hint: use realloc
int* insertMaxHeap(int* arr, int* len, int val) {
    arr = (int*)realloc(arr, (*len + 1) * sizeof(int));
    arr[*len] = val;
    (*len)++;
    int child = *len - 1;
    int parent = (child - 1) / 2;
    while (child > 0 && arr[child] > arr[parent]) {
        swap(&arr[child], &arr[parent]);
        child = parent;
        parent = (child - 1) / 2;
    }
    return arr;

}