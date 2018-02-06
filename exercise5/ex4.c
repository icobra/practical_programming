#include <stdio.h>

/* Программа перевода км/ч в мили/ч  *
*  исходя из соотношения:            *
*  мили/ч = км/ч * 0,6213712         */

char line[100];                /* Линия для ввода данных */
const float KOF = 0.6213712;   /* Коэффициент перевода */
float kilometers;              /* Скорость в км/ч      */
float miles;                   /* Скорость в миль/ч    */

int main()
{
    printf("Введите скорость в км/ч: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &kilometers);

    miles = kilometers * KOF;
    printf("Скорость в миль/ч составит: %f\n", miles);

    return (0);
}
