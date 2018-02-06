#include <stdio.h>

/* Рассчет оплаты труда, с учетом сверхурочных *
*  Нормальная неделя = 40 часам                *
*  Оплата сверхурочных на 1,5 больше нормы    */

char line1[80];     /* Линия ввода */
char line2[80];     /* Линия ввода 2*/
float hour;         /* Колличество отработанных часов */
float pay;          /* Зарплата за 1 час */
float total;        /* Зарплата за всё время */

int main()
{
    printf("Введите колличество отработанных часов в неделю: ");
    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%f", &hour);

    printf("Введите стоимость одного часа работы: ");
    fgets(line2, sizeof(line2), stdin);
    sscanf(line2, "%f", &pay);

    if (hour <= 40)
        total = pay * hour;
    else
        total = 40 * pay + (hour - 40) * 1.5 * pay; 

   printf("Оплата труда за это время составила %f $\n", total);

   return (0);
}
