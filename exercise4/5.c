#include <stdio.h>

/* Программа которая намеренно делает ошибки
   выводим число с плавающей запятой с помощью %d
   выводим целое число с помощью %f
   выводим символ с помощью %d */


/* Добавим наши числа и символ */

float number = 3.1415926 ;
int number2 = 4;
char char1 = 'A';

int main()
{
    printf(" Float = %f \n Integer = %d\n Char = %c\n",
        number, number2, char1);
    printf(" На самом деле у нас были такие значения \n");
    printf(" Но использование %%d, %%f, %%d, ведет к таким последствиям \n");
    printf(" Это число с плавающей запятой %d\n", number);
    printf(" Это целое число %f\n", number2);
    printf(" Это символ %d\n", char1);
    return(0);
}
