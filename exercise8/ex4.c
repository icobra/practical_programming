#include <stdio.h>

/* Таблица умножения от 1 до 10 для выбранного числа */

int main()
{
    char line[100];   /* Линия ввода */
    int number;       /* Число для которго нужна таблица */
    int counter;      /* Счетчик */
    int value;        /* Вспомогательная переменная */

    printf("Введите число для которого нужна таблица умножения. ");
    fgets(line, sizeof(line), stdin);
    sscanf(line,"%d", &number);
    printf("Таблица умножения для %d от 0 до 10\n", number);

    for (counter = 0; counter <= 10; ++counter) {
        value = number * counter;
        printf(" %d * %d = %d \n", number, counter, value);
    }
    return(0); 
}
