#include <stdio.h>

int main ()
{
    unsigned int a, b;
    scanf("%x", &a); // 1


    printf("%d", a); // 2

    printf("%o", a >> 3); // 3

    printf("%o", ~a); // 4

    scanf("%o", &b); // 5
    printf("%o", a | b);
    return 0;
}