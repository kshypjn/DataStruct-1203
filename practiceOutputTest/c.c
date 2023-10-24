#include <stdio.h>

void doSomething(int* blah) {
    *blah = 420;
}
int main() {
    int x = 42;
    int* notblah = &x; 
    printf("out1: %d\n", &x);
    doSomething ( notblah ) ; 
    printf("out2: %d\n", x); 
    printf("out3: %d", &x); 
    return 0;
}
