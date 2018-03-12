#include <stdio.h>

/******************************************
дано:
char * inp = "ls -l -R file1 file2"

надо:
вывести адреса после первого пробела

*******************************************/

int main(){
    char * inp = "ls -l -R file1 file2";

    char *x = inp;
    while (*x) {
        // printf("Inside the loop... Now pointer starts at %s \n", x);
        if (*x == ' '){
        //    printf("%ld \n",  (long int) x);
        printf("%s \n", (x+1));
        }
        x++;

    }
}
