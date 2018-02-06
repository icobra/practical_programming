#include <stdio.h>
/******************************************
*    WARNING!!!! ACHTUNG!!! ВНИМАНИЕ!!!   *
*   With math.h - you need use flag -lm   *
*           gcc ex1.c -lm -o ex1          *
*     Если не можете собрать бинарник     *
*            gcc ex1.c -lm -o ex1         *
******************************************/
#include <math.h>

/* Найти квадрат расстояния между  *
*  двумя точками на плоскости      */
/* Линии для ввода значений */
char point1[100];
char point2[100];
/* Координаты точек */
int point1y;
int point1x;
int point2y;
int point2x;
int distance;  /* квадрат расстояния между точками */

int main()
{
    printf("Введите координаты первой точки через пробел x y:");
    fgets(point1, sizeof(point1), stdin);
    sscanf(point1, "%d %d", &point1x, &point1y);
    printf("Введите координаты второй точки через пробел x y:");
    fgets(point2, sizeof(point2), stdin);
    sscanf(point2, "%d %d", &point2x, &point2y);

    /* Вычисление квадрата расстояния */
    distance = (point2x - point1x)*(point2x-point1x);
    distance = distance + (point2y - point1y)*(point2y - point1y);
    distance = sqrt(distance); 
    
    printf("Квадрат расстояния равен %d\n", distance);
 
   return 0;

}
