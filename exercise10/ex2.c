#include <stdio.h>

/* Write a macro is_digit that returns TRUE *
* if its argument is a decimal digit.      */

#define IS_DIGIT(x) ((x == '0' || x == '1' || x == '2' || \
    x == '3' || x == '4' || x == '5' || x == '6' || x == '7' \
    || x == '8' || x == '9') ? "TRUE":"FALSE")

/* Если на вход IS_DIGIT хотите подавать %d, то нужно *
*  изменить x == 'number' на x == number             */

int main()
{
    char line[100];   // Линия ввода
    printf("Проверяется лишь первый символ. \n");
    printf("Введите число: \n");
    fgets(line, sizeof(line), stdin);

    printf("Ваше число является %s \n", IS_DIGIT(line[0]));
    
    return (0);
}