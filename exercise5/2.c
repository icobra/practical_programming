#include <stdio.h>

/* Программа по вычислению объема сферы *
*  заданного радиуса по формуле:        *
*  4 / 3 * PI * r ^ 3                   */

const float PI = 3.1415926;    /* Задаем значение PI */
char line[1000];               /* Переменная для хранения ввода */
float radius;                  /* Переменная для хранения радиуса */
float volume;                  /* Переменная для хранения объема */

int main()
{
    printf("Введите радиус сферы: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &radius);
 
    volume = 4.0 / 3.0 * PI * radius * radius * radius;
    printf("Объем заданной сферы равен : %f\n", volume);
   
    return(0);
}
