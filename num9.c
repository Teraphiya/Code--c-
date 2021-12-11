#include <stdio.h>

int main()
{
    int numbers = 0;
    int upper = 0;
    int lower = 0;
    char number;
    char str[1024] = {};
    scanf("%s", &str);
    for(int i=0; i<sizeof(str) / sizeof(char) -1; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            numbers++;
        } else if(str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        } else if(str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        }
    }
    printf("Lower: %d, upper: %d, numbers: %d \n", lower, upper, numbers);

    printf("Number: ");
    scanf(" %c", &number);

    if(number == '1') printf("1-st");
    else if(number == '2') printf("2-nd");
    else if(number == '3') printf("3-rd");
    else if(number >= '4' && number <= '9') printf("%c-th", number);
}