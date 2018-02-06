#include <stdio.h>

/* Для суммы денег меньше чем 1.00,           *
*  посчитать скольно нужно монет достоинством *
*  в 25, 10, 5 и 1 цент.                      */

char line[20];       /* Линия для ввода данных */
int amount;          /* колличество центов от 0 до 99 */
int quaters;         /* 25 центовые монеты */
int dimes;           /* 10 центовые монеты */
int nickels;         /* 5 центовые монеты */

int main()
{
    printf("Введите сумму денег от 0 до 99 центов: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d",&amount);

    quaters = amount / 25;
    amount = amount - 25 * quaters;
    dimes = amount /10;
    amount = amount - 10 * dimes;
    nickels = amount / 5;
    amount = amount - 5 * nickels;

    printf("Ваша сумма состоит из %d quaters, %d dimes, %d ncikels и %d cents \n",
        quaters, dimes, nickels, amount);

   return (0);
}
