#include <stdio.h>
#include <string.h>

int NOD(int n1, int n2) {
    while (n1 != n2){
        if (n1 > n2) n1 = n1 - n2;
        else n2 = n2 - n1;
    }
    return n1;
}

int NOK(int n1, int n2) {
    return (n1*n2)/NOD(n1, n2);
}

int * generateArr(int n3, int *length) {
    int i = 0;
    int *array = malloc(4*sizeof(int));
    while(n3/10 > 0) {
        array[i] = n3%10;
        n3 /= 10;
        i++;
    }
    array[i] = n3;
    *length = i;

    return array;
}

int main()
{
    int n1, n2, n3, *arr;
    int length=0;
    printf("First number:");
    scanf("%d", &n1);
    printf("Second number:");
    scanf("%d", &n2);
    printf("NOD: %d\n", NOD(n1, n2));
    printf("NOK: %d\n", NOK(n1, n2));

    printf("Third number:");
    scanf("%d", &n3);
    arr = generateArr(n3, &length);
    printf("Generated array: [");
    for(length; length>=0; length--) {
        printf("%d ", arr[length]);
    }
    printf("]");
}