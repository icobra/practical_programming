#include <stdio.h>

/* Write a preprocessor macro that swaps two integers.  *
* (For the real hacker, write one that does not use a   *
* temporary variable declared outside the macro.)       */

#define SWAP(a,b) a = a + b; b = b - a; b = -b; a = a - b;

int main()
{
    char line[100];   // Линия ввода
    int a;         // Данные а и б
    int b;
    printf("Меняет местами A и B. \n");
    printf("Введите числа через пробел: \n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &a, &b);
    
    SWAP(a,b);
    printf("Ваше число является %d %d \n", a,b);
    
    return (0);
}