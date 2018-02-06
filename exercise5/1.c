#include <stdio.h>

/* Конвертруем градусы цельсия в фаренгейт
используя формулу F = 9/5 * C + 32 */

char line[10];      /* Переменная для ввода данных */ 
float centigrade;   /* Градусы Цельсия */
float fahrenheit;   /* Градусы Фаренгейта */

int main()
{
    printf("Введите температуру в градусах Цельсия: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%f", &centigrade);

    fahrenheit = 9.0 / 5.0 * centigrade + 32;
    printf("Температура в Фаренгейтах равна %f\n", fahrenheit);

    return (0);
}
