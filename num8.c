#include <stdio.h>
#include <string.h>

int main()
{
    // 6 8 10 12

    char str1[1024], conc_str1[1024], conc_str2[1024], symb, *position, *position1, *position2;
    char str2[1024] = {};
    int n;
    printf("Enter concatenation string: ");
    scanf("%s", &conc_str1);
    printf("Enter concatenation string: ");
    scanf("%s", &conc_str2);
    strcat(conc_str1, conc_str2);
    printf("Concatenated: %s \n", conc_str1);


    printf("Enter string: ");
    scanf("%s", &str1);
    printf("Enter n: ");
    scanf(" %d", &n);
    strncpy(str2, str1, n);
    printf("%s \n", str2);

    printf("Enter symbol: ");
    scanf("%s", &symb);

    position = strchr(str1, symb);
    printf("Position: %d \n", position-str1);

    position1 = strpbrk(str1, conc_str1);
    printf("Element %c appears in str1 at %d \n", *position1, position1 - str1);

    position2 = strcspn(str1, conc_str1);
    printf("First %d items don't contain", position2);
}