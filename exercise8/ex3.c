#include <stdio.h>
/* Поиск среднего значения n чисел */

int main(){

    char line [100];   /* Линия ввода */
    int number;        /* Количество чисел */ 
    float value;    /* Значение числа */
    int counter;       /* Счётчик */
    float answer;      /* Ответ */
    
    printf("Введите количество чисел: ");
    fgets(line, sizeof(line), stdin); 
    sscanf(line,"%d", &number);
    counter = number;
   
    while (counter > 0){
        --counter;
        printf("Введите значение числа: ");
        fgets(line, sizeof(line), stdin);
        sscanf(line,"%f", &value);
        answer += value;
    }
    
    answer = answer / number;
    printf("Среднее %d чисел равно  %0.3f \n", number, answer);
    return (0);
}  
