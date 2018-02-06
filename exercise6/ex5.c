#include <stdio.h>

/* Программа по определению високосного года.            *
* Если год делится без остатка на 4 и с остатком на 100, *
* то год считается высокосным, иначе нет, исключения -   *
* года, которые делятся на 400 без остатка.             */

char line[10];   /* Линия ввода */
int year;        /* Переменная для хранения года */

int main()
{
    printf("Введите год, чтобы узнать является ли он високосным: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line,"%d",&year);

    if(year%4 == 0) {
        if (year%400 == 0)
            printf("Високосный год \n");
        else if (year%100 != 0)
            printf("Високосный год \n");
        else 
            printf("Не високосный год \n");
    }

/* Код выполняется даже если вводить буквы...           *
*  честно говоря слабо представляю как происходит       *
*  преобразование в число из line с помощью оператора   *
*  sscanf, любая последовательность букв дает           *
*  високосный год                                      */

    return (0);
}
