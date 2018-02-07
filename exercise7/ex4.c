#include <stdio.h>

/* Расчитать новую сумму, добавив 8% налога и *
*  округлив результат до цента               */

int main()
{
    char line[100];  /* Линия ввода */
    int sales;       /* Цена товара */
    int tax;         /* Налог */
    float result;    /* Итог с налогом */

    printf("Введите цену товара без налога: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &sales);
 
    sales = sales * 100;
    printf("#### %d \n" , sales);
    tax = sales / 100 * 8;
    printf("### %d \n", tax);

    result = (sales + tax)/100;

    printf("Сумма с учетом налога равна %.2f \n", result);

    return(0);
}
