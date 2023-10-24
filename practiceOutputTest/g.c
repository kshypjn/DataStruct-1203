#include <stdio.h>

int main() {
    int i = 2984; 
    int*j;
    j =&i; 
    i=i+*j; 
    printf("%d", i);
    return 0;
}
