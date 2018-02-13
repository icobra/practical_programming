#include <stdio.h>

/* Write a second macro is_hex that returns true if *
*  its argument is a hex digit (0-9, A-F, a-f). The *
*  second macro should reference the first.         *
*  Only first macro in exercise10/ex2.c             */

#define IS_DIGIT(x) (x == '0' || x == '1' || x == '2' || \
    x == '3' || x == '4' || x == '5' || x == '6' || x == '7' \
    || x == '8' || x == '9')

#define IS_HEX(x) ((IS_DIGIT(x) || x == 'a' || x == 'b' || \
    x == 'c' || x == 'd' || x == 'e' || x == 'f') \
    ? "TRUE":"FALSE")

/* Типа bool в С  до С99 нет, что бы подать один макрос на      *
* вход нужно чтобы он возвращал лишь 1 или 0, а это стандартное *
* поведение                                                     */

int main()
{
    char line[100];   // Линия ввода
    printf("Проверяется лишь первый символ. \n");
    printf("Введите число: \n");
    fgets(line, sizeof(line), stdin);

    printf("Ваше число является %s \n", IS_HEX(line[0]));
    
    return (0);
}