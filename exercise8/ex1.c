#include <stdio.h>

/* Программа для вывода доски 8 на 8 *
*  с ячейками раземром 5 на 3       */

int main()
{
    int index;    /* Индекс для цикла for */
   
    char first_line[50] = "+-----+-----+-----+-----+-----+-----+-----+-----+";
    char second_line[50] = "|     |     |     |     |     |     |     |     |";
    printf("    1     2     3     4     5     6     7     8  \n"); 

    for (index = 0; index < 8; ++index){
        printf("%s\n", first_line);
        printf("%s\n%s\n%s\n", second_line, second_line, second_line);
    }
    printf("%s\n", first_line);
    return (0);
}
