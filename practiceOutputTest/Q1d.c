#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char x[25];
    char *s = "Please learn basics of C!"; 
    int length = strlen(s) ;
    int i;
    for (i = 0; i < length; i++){
        x[i] = s[length - i];
    }
    printf ("%s" , x) ;
    
}
