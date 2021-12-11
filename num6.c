#include <stdio.h>

int main ()
{
    float arr[4] = {W, O, R, K};
    float *arr_c = arr;
    for(int i=0; i<4 ; i++){
        printf("%lf ", *arr_c++);
    }
    printf("\n");

    float *arr_2 = (float *) malloc(4*sizeof(float));
    arr_2[0] = -3.4;
    arr_2[1] = 4.5;
    arr_2[2] = -5.6;
    arr_2[3] = 6.7;
    for(int i=0; i<4; i++) {
        printf("%f ", arr_2[i]);
    }
    free(arr_2);
}
