#include <stdio.h>
#include <stdlib.h>

int main() {
    char str [100]; 
    int i;
    scanf("%s", str);
    for (i = 0; str[i] != NULL; i++) {
        if (str[i] != 'x' || str[i] != 'y')
        {
            printf ("%c" , str [i]) ;
        } 
    }

    int q = 2984; 
    int*p;
    p =&q; 
    q=q+*p; 
    printf("%d", q);
    return 0;
}
