#include <stdio.h>
#include <math.h>

int main ()
{
    float b, z1, z2;
    scanf ("%f", &b);
    z1 = (sqrtf (2 * b + 2 * (sqrtf (b * b - 4)))) / (sqrtf (b * b - 4) + b +2);
    z2 = 1 / (sqrtf (b + 2));
    printf ("%f %f", z1, z2);
    return 0;
}