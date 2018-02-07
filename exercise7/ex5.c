#include <stdio.h>
#include <math.h>

/* Узнать является ли число простым */

int main()
{
    char line[100];
    int number;   /*искомое число */
    int count;    /* счетчик */
    int slave;    /* вспомогательное число для вычислений */
    int result;   /* результат */

    printf("Введите целое положительное число: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &number);

    if (number == 1)
        printf("1 - простое число \n");
    else {
        slave = sqrt(number);
        count = 2;
        while (count <= slave){
            if ((number % count) == 0){
                result = 1;
                break;
            } else
                 ++count;
        }
    }
    if (result == 1)
        printf("%d - не простое число\n", number);
    else
        printf("%d - простое число\n", number);
    return (0);
}
