#include <stdio.h>
#include <stdlib.h>

/****************************************** 
*       Counting spaces in string.        *
*   Give some memory to pointers on char. *
*       Writing substrings on memory.     *
******************************************/

int main(){

    char inp[] = "ls -l -R file1 file2"; // Our string
    char *x = inp;         // Pointer on string
    int i = 0;             // Counter
    int maxsize;           // Variable to size of memory
    char ** result_ptr;    // Result pointers on char       

    /* Counting spaces on string  */
    while(*x){
        if (*x == ' '){
            i++;
        }
        x++;
    }
    maxsize = i + 1; 
    x = inp;
    printf("Size of memory (maxsize) = %d\n", maxsize);
    result_ptr = (char *) malloc (maxsize * sizeof (char*));
    result_ptr[0] = x;
    i = 1;

    /* Make substrings */
    while (*x) {
        // printf("Inside the loop... Now pointer starts at %s \n", x);
        if (*x == ' '){
            //    printf("%ld \n",  (long int) x);
            result_ptr[i] = (x+1);
            i++;
            *x = 0;
            // printf("%s \n", (x+1));
        }
        x++;
    }
    
    /* Print substrings */
    for(i=0; i < maxsize; i++){
        printf("%s\n", result_ptr[i]);  
    }

    /* Clear memory */
    free(result_ptr); 
    x = NULL;
    result_ptr = NULL;
    return 0;
}
