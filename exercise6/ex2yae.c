#include <stdio.h>
/* Программа для вывода шкалы оценок относительно оценки. *
* Шкала оценок.                                           *
*    0  - 60 ---> F                                       *
*    61 - 70 ---> D                                       *
*    71 - 80 ---> C                                       *
*    81 - 90 ---> B                                       *
*    91 - 100 --> A                                      */

char line[80];         /* Линия ввода */
char grade;            /* Оценка */

/* Это не задача из учебника, просто я не правильно *
*  прочитал условия и получилась обратная задача   */

int main()
{
    printf("Введите оценку, чтобы получить шкалу для данной отметки:");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%s", &grade);

    if (grade == 'F')
        printf("Шкала отметок от 0 до 60. \n");
    else if (grade == 'D')
        printf("Шкала отметок от 61 до 70. \n");
    else if (grade == 'C')
        printf("Шкала отметок от 71 до 80. \n");
    else if (grade == 'B')
        printf("Шкала отметок от 81 до 90.\n");
    else if (grade == 'A')
        printf("Шкала отметок от 91 до 100. \n");
    else
        printf("Данной отметки не существует, введите отметки от F до A\n");

    return (0);
}
