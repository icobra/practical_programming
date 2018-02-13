#include <stdio.h>
/* Write a macro that returns TRUE if its parameter *
*  is divisible by 10 and FALSE otherwise.         */
/* Используя препроцессор                          */
// Для проверки можно разкоментировать одно из значений

#define LOGICAL(x) (x % 10 == 0 ? "TRUE":"FALSE")

int main()
{
    char line[100];   // Линия ввода
    int  number;      // Число

    printf("Введите число: \n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &number);

    printf("Ваше число является %s \n", LOGICAL(number));
    
    return (0);
}