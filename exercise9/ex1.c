#include <stdio.h>

/* Программа которая считает слова в строке */

/* Можно откидывать цифры, но это усложнит программу */

/* Some bugs - если русские буквы, то UTF-8     *
*  один символ занимает 2 байта, если захотите  *
*  считать буквы в этой программе               */

char line[100];      // Линия ввода

int lenght(char string[])
{
    int index;  /* Индекс внутри строки */
    int number = 1; /* Счетчик слов, потому что строка начинается не с пробела */
    /* Цикл до тех пор, пока не встретим конец строки */

    for (index = 0; string[index] != '\0'; ++index){
        if (string[index] == ' ')
            ++number;
        continue;
    }

    return (number);
}


int main()
{
    printf("Введите сторку для подсчета слов\n");
    fgets(line, sizeof(line), stdin);
    
    printf("Ваша строка\n");
    printf("%d\n", lenght(line) );

    return 0;
}