#include <stdio.h>

int main()
{
    int a = 5;
    int *p;

    p = &a;

    printf("value of :%d\n", a);     // value
    printf("Adress of a:%p\n", &a);    // address of a
    printf("Pointer address:%p\n", p);     // pointer stores address
    printf("Pointer value:%d\n", *p);    // value using pointer

    return 0;
}
