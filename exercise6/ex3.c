#include <stdio.h>
#include <string.h>
/* Программа для вывода оценки согласно баллам            *
* Шкала оценок:                                           *
*    0  - 60 ---> F                                       *
*    61 - 70 ---> D                                       *
*    71 - 80 ---> C                                       *
*    81 - 90 ---> B                                       *
*    91 - 100 --> A                                       *
* Дополнительная шкала:                                   *
*    1 - 3 ---> -                                         *
*    4 - 7 ---> ничего                                    *
*    8 - 0 ---> +                                         *
*    оценка F может быть только F                         */

char line[80];         /* Линия ввода */
int  grade;            /* Оценка */
char modifer[2];          /* Модификатор оценки */ 
int  counter;          /* Счетчик модификатора */

int main()
{
    printf("Введите колличество баллов,  чтобы узнать отметку:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &grade);

    counter = grade % 10;
    if (counter == 0)
        counter += 10;
    if (counter < 4)
        strcpy(modifer, "-");
    else if (counter < 8)
        strcpy(modifer,"");
    else
        strcpy(modifer,"+"); 

    if (grade <= 60)
        printf("Ваша отметка F. \n");
    else if (grade <= 70)
        printf("Ваша отметка D%s. \n", modifer);
    else if (grade <= 80)
        printf("Ваша отметка C%s. \n", modifer);
    else if (grade <= 90)
        printf("Ваша отметка B%s. \n", modifer);
    else if (grade <= 100)
        printf("Шкала отметка А%s. \n", modifer);
    else
        printf("Данной отметки не существует, введите значения от 0 до 100\n");

    return (0);
}
