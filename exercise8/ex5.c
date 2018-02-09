#include <stdio.h>

/* Программа для определения английских *
*  гласных и согласных букв            */

int main()
{
    char line[100];   /* Для приема входных данных*/
    char character;   /* Буква для проверки */
    int value;        /* Значение для гласной / согласной */    

    /* Всего 6 букв a, e, i, o, u, y */ 
    printf("Введите букуву, чтобы проверить является она гласной или нет: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%c", &character);

    /* Для этой задачи подойдет оператор switch */
    switch (character) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
        case 'y':
        case 'Y':
            printf(" %c - это гласная буква \n", character);
            break;
        default:
            printf(" %c - это согласная буква \n", character);
            break;
    }

    return(0);
}
 
