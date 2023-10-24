#include <stdio.h>

int main() {
    int arr[5] = {7, 19, 29, 0, 5}; 
    int *p = arr;
    int **pp = &p;
    printf("%d\n", *p + **pp);
    return 0;
}
