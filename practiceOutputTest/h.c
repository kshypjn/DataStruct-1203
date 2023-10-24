#include <stdio.h>

struct learnC
{
    int a, b, c;
};

int main()
{
    char *cptr = (char *)0x5000;
    int *iptr = (int *)0x7000;
    struct learnC *sptr = (struct learnC *)0x9000;
    printf("char 0x%02lx %p %p\n", sizeof(char), cptr, (cptr + 1));
    printf("int 0x%02lx %p %p\n", sizeof(int), iptr, (iptr + 1));
    printf("struct 0x%02lx %p %p\n", sizeof(struct learnC), sptr, (sptr + 1));
    return 0;
}