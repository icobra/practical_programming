#include <stdio.h>
#include <stdlib.h>

/* 

Упражнение 3:
Выделить область в памяти размером N, заполнить её числами от 1 до N, 
вынести на экран, освободить память

*/

int main(){
    char line[100];   // line to data input
    int maxsize;      // max size to malloc
    int * ptr;        // our pointer
    int i = 0;        // counter

    printf("Введите количество занимаемых ячеек памяти: \n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &maxsize);   
    
    ptr = (int *) malloc (maxsize * sizeof (int));

    while (i < maxsize){
        ptr[i] = i+1;
        printf("%d \n", ptr[i]);
        i++;
    }
    free (ptr);
    return 0;
}