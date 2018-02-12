#include <stdio.h>
/* Write a macro that returns TRUE if its parameter *
*  is divisible by 10 and FALSE otherwise.         */
/* Используя препроцессор                          */
// Для проверки можно разкоментировать одно из значений

// #define LOGICAL 10  // На выходе будет It is TRUE
// #definr LOGICAL 15  // На выходе будет It is FALSE
// Ниже инструкция для задания индификатора при сборке

/* Так как препроцессор запускается раньше, чем С   *
*  то единственным методом для задания индификатора *
*  вне кода - может быть:                           *
*  gcc -D[индификатор] = [значение]                 *
*  для нашего случая - это:                         *
*  gcc -g -DLOGICAL=12 ex1.c -o ex1                 *
*  ВНИМАНИЕ!!! не разрывайте -DLOGICAL=12          */                        

int main()
{
    printf("Для понимания работы программы смотрите описание в исходном коде \n");
    #if LOGICAL % 10 == 0
        printf("It is TRUE \n");
    #else
        printf("It is FALSE \n");
    #endif 
    return (0);
}