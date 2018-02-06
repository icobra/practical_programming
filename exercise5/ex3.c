#include <stdio.h>

/* Вычисление периметра прямоугольника      *
*  по заданным height и width, используя    *
*  формулу perimeter = 2 * (height + width) */

char line1[100];     /* линия 1 для данных */
char line2[100];     /* линия 2 для данных */

/* можно конечно обе переменных положить в 1 линию, *
*  но сейчас это кажется не таким интересным        */

float height;       /* Для высоты  */
float width;        /* Для ширины  */
float perimeter;    /* Для периметра */

int main()
{
    printf("Введите высоту прямоугольника: ");
    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%f", &height);

    printf("Введите ширину прямоугольника: ");
    fgets(line2, sizeof(line2), stdin);
    sscanf(line2, "%f", &width);

    perimeter = 2.0 * (height + width);
    printf("Периметер вашего прямоугольника равен: %f\n", perimeter);

    return (0);
}
