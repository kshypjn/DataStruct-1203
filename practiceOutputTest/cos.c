#include <stdio.h>

int main() {
    int A[2] = {-2,-2};
    int i;
    scanf("%d", &i);
    switch (i) {
        case 0: 
            A[0] = 0;
            break;
        case 1:
        case 2: 
            A[1] = 1;
            break;
        default: 
            A[0] = -1;
            break;
    }
    for (int x =0; x<2;x++){
        printf("%d,%d\n", A[x],i);
    }
    return 0;
}