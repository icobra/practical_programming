#include <stdio.h>

/* Программа для рассчета периметра прямоугольников
   1-ый с шириной в 3 дюйма и высотой в 5,
   2-ой с шириной 6.8 и длинной в 2.3 дюйма */

int width_rectangle1 = 3;       /* Ширина 1 прямоугольника */
int height_rectangle1 = 5;      /* Высота 1 прямоугольника */
int result1;                /* Периметр 1 прямоугольника */
float width_rectangle2 = 6.8;     /* Ширина 2 прямоугольника */
float height_rectangle2 = 2.3;    /* Высота 2 прямоугольника */
float result2;              /* Периметр 2 прямоугольника */


int main()
{   
    result1 = 2 * (width_rectangle1 + height_rectangle1);
    printf("Периметр 1-го прямоугольника равен %d\n", result1);
    result2 = 2 * (width_rectangle2 + height_rectangle2);
    printf("Периметер 2-го прямоугольника равен %f\n", result2);
    return(0);
}
