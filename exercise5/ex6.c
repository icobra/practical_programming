#include <stdio.h>

/* Программа, которая переводит минуты  *
*  в часы с минутами, например:         *
*  90 минут = 1 час 30 минут            */

char line[100];        /* Линия для ввода данных */
int hours;             /* Для хранения часов */
int minutes;           /* Для хранения минут */

int main()
{
    printf("Введите время в минутах:");
    fgets(line,sizeof(line), stdin);
    sscanf(line, "%d", &minutes);

    hours = minutes / 60;
    minutes = minutes % 60;

    printf("Искомое время %d час(ов) %d минут(а)\n", hours, minutes);

    return (0);
}
