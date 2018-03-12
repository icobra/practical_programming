#include <stdio.h>
#include <stdlib.h>

/******************************************************************** 

Взять упражнение два
Посчитать пробелы
Выделить памяти чтоб хватило на (число пробелов +1) указателей на char
И записать в этот массив адреса всех подстрок: сначала начало строки, 
а потом адреса (адрес пробела+1)

**********************************************************************/

int main(){

    char * inp = "ls -l -R file1 file2";
    char *y = inp;
    char *x = inp;
    int i = 0;          // счетчик
    int maxsize;        // размер для выделения памяти
    char ** result_ptr;   // искомая вещь       

    /* Считаем пробелы, потому что а вдруг следующий 
       раз будет другая строка                            */

    while(*y){
        if (*y == ' '){
            // на случай если придется добавить команд
            i++;
        }
        y++;
    }
    maxsize = i + 1; 

    printf("Размер maxsize %d\n", maxsize);

    result_ptr = (char *) malloc (maxsize * sizeof (char*));
    result_ptr[0] = x;
    i = 1;

    while (*x) {
        // printf("Inside the loop... Now pointer starts at %s \n", x);
        if (*x == ' '){
            //    printf("%ld \n",  (long int) x);
            result_ptr[i] = (x+1);
            i++;
            // printf("%s \n", (x+1));
        }
        x++;

    }
    
    for(i=0; i < maxsize; i++){
        printf("%s\n", result_ptr[i]);  
    }

    free(result_ptr);

    return 0;
}