#include <stdio.h>

int main(){

    char line [100];   /* Линия ввода */
    int number;        /* Количество || резисторов */ 
    float resistor;    /* Номинал резистора */
    float answer;      /* Ответ */

    /* Можно добавить проверку числа сопротивлений,   *
    *  при количестве меньше чем 2, вычисления не имеют смысла */    
    printf("Введите количество параллельных сопротивлений: ");
    fgets(line, sizeof(line), stdin); 
    sscanf(line,"%d", &number);
   
    while (number > 0){
        --number;
        printf("Введите номинал сопротивления: ");
        fgets(line, sizeof(line), stdin);
        sscanf(line,"%f", &resistor);
        answer = answer + (1 / resistor);
    }
    
    answer = 1 / answer;
    printf("Общее сопротивление равно %0.3f \n", answer);
    return (0);
}  
