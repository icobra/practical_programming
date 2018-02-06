#include <stdio.h>

/* Программа перевода часов и минут в минуты *
*  например 1 час 30 минут = 90 минут        */

char line[100];       /* Линия для ввода значений */
int hour;             /* Переменная для хранения часов */
int minutes;          /* Переменная для хранения минут */

int main()
{
    printf("Формат ввода 1 30 или 0 25\n");
    printf("Введите время в часах с минутами через пробел: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line,"%d %d", &hour, &minutes);
 
    minutes = minutes + hour * 60;
    printf("Время в минутах равно: %d\n", minutes);

    return (0);
}
