#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Value = %d\n", a);
    printf("Address = %p\n", (void*)&a);

    return 0;
}
