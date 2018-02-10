#include <stdio.h>


/* Если первая строка начинает вторую строку    *
*  вернуть истину.                              *
*  Write a function begins(string1,string2)     *
*  that returns true if string1 begins string2. *
*  Write a program to test the function.        */

char line1[100];      // Линия ввода строки 1
char line2[100];      // Линия ввода строки 2

int lenght(char string1[], char string2[])
{
    int index;  /* Индекс внутри строки */
    int number = 1; /* Счетчик слов, потому что строка начинается не с пробела */
    /* Цикл до тех пор, пока не встретим конец строки */

    for (index = 0; string1[index+1] != '\0'; ++index){
        if (string1[index] != string2[index]) {
            --number;
            break;
        } else {
            continue;
        }
    }

    return (number);
}


int main()
{
    printf("Введите первую сторку: \n");
    fgets(line1, sizeof(line1), stdin);

    printf("Введите вторую сторку: \n");
    fgets(line2, sizeof(line2), stdin);
    
    printf("Ваша строка\n");
    printf("%d\n", lenght(line1, line2) );

    return 0;
}