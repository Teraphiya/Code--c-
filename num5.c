#include <stdio.h>

int main ()
{
    int mas[9] = {99, 88, 77, 66, 55, 44, 33, 22, 11}; //задаём массив чисел
    printf ("%d %d %d\n", mas[0], mas[1], mas[2]);
    printf ("%d %d %d\n", mas[3], mas[4], mas[5]);
    printf ("%d %d %d\n", mas[6], mas[7], mas[8]); //создаём таблицу значений, взятых из массива

    for (int i = 0; i<=9; i++)
    {
        mas[9] = i ;
        printf("%d", i);
    }

    int mat1 [2][2] = {{2, 5}, {2, 2}}; //создаём 1 матрицу
    int mat2 [2][2] = {{2, 0}, {3, 0}}; //создаём 2 матрицу
    int mat12 [2][2]; //задаём матрицу произведения

    mat12 [0][0] = mat1[0][0] * mat2[0][0] + mat1[0][1] * mat2[1][0];
    mat12 [0][1] = mat1[0][0] * mat2[0][1] + mat1[0][1] * mat2[1][1];
    mat12 [1][0] = mat1[1][0] * mat2[0][0] + mat1[1][1] * mat2[1][0];
    mat12 [1][1] = mat1[1][0] * mat2[0][1] + mat1[1][1] * mat2[1][1];

    printf("%d %d \n%d %d", mat12[0][0], mat12[0][1], mat12[1][0], mat12[1][1]);
}