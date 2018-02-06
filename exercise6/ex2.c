#include <stdio.h>
/* Программа для вывода оценки согласно баллам            *
* Шкала оценок:                                           *
*    0  - 60 ---> F                                       *
*    61 - 70 ---> D                                       *
*    71 - 80 ---> C                                       *
*    81 - 90 ---> B                                       *
*    91 - 100 --> A                                      */

char line[80];         /* Линия ввода */
int grade;            /* Оценка */

int main()
{
    printf("Введите колличество баллов,  чтобы узнать отметку:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &grade);

    if (grade <= 60)
        printf("Ваша отметка F. \n");
    else if (grade <= 70)
        printf("Ваша отметка D. \n");
    else if (grade <= 80)
        printf("Ваша отметка C. \n");
    else if (grade <= 90)
        printf("Ваша отметка B.\n");
    else if (grade <= 100)
        printf("Шкала отметка А. \n");
    else
        printf("Данной отметки не существует, введите значения от 0 до 100\n");

    return (0);
}
