#include <stdio.h>

/******************************************
дано:
char * inp = "ls -l -R file1 file2"

надо:
вывести адреса всех пробельных символов

*******************************************/

int main(){
    int i = 0;
    char * inp = "ls -l -R file1 file2";

    char *x = inp;
    while (*x) {
        x++;
        if (*x == 32){
            printf("%d %ld \n", i, (long int) x);
            i++;
        }
    }
    return(0);
}
