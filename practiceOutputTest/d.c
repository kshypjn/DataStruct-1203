#include <stdio.h>

int main() {
    const int a = 15; 
    const int * ptr ; 
    ptr = &a;
    *ptr = 47;
    printf ("%d\n" , a) ; 
    return 0;

}
