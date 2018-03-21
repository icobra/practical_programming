#include <stdio.h>

/* Matrix for game of words */

int main(){
    char field[5][5];            // Our field

    /* I have NULL but not Zero 
    char field[5][5] = {0};  */

    char line[100];              // Input line
    int a,b;                     // Coordinats of letter
    char letter;                 // Letter
    char word[25];               // Word

    int i = 0;                   // Counter
 

    /* Make all field position = Zero */ 
    while(i < 5){
        int k = 0;
        field[i][k] = '0';
        field[i][k+1] = '0';
        field[i][k+2] = '0';
        field[i][k+3] = '0';
        field[i][k+4] = '0';
        i++;
    }
    i = 0; // Counter = 0


/* 
    printf("%c %c %c %c %c \n", field[2][0], field[2][1], field[2][2], field[2][3],
        field[2][4]);
*/
  
    /* Print our field on screen with scale */
    printf("  1 2 3 4 5\n");
    while(i < 5){
        int k = 0;
        printf("%d %c %c %c %c %c \n", i+1, field[i][k], field[i][k+1], field[i][k+2],
            field[i][k+3], field[i][k+4]);
        i++;
    }
    printf("  1 2 3 4 5\n \n");
    i = 0;   // Counter = 0


    /* Start word in our game. Set on center of field */
    field[2][0] = 'w';
    field[2][1] = 'o';
    field[2][2] = 'r';
    field[2][3] = 'd';
    field[2][4] = 's';

/*
    printf("%c Last word \n", field[3][0]);
*/

    /* Print our field on screen with scale */
    printf("  1 2 3 4 5\n");
    while(i < 5){
        int k = 0;
        printf("%d %c %c %c %c %c \n", i+1, field[i][k], field[i][k+1], field[i][k+2],
            field[i][k+3], field[i][k+4]);
        i++;
    }
    printf("  1 2 3 4 5\n");
    i = 0;   // Counter = 0

    // Input date of gamer
    printf("Введите букву кооридинаты и слово в формате 1 2 m worm: \n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d %c %25s", &a, &b, &letter, word);

    printf("%d %d %c %s\n", a, b, letter, word);
    
    if (field[a-1][b-1] == 0){
        field[a-1][b-1] = letter;
    }
    else{
        printf("Клетка уже занята \n");
    }

    /* Print our field on screen with scale */
    printf("  1 2 3 4 5\n");
    while(i < 5){
        int k = 0;
        printf("%d %c %c %c %c %c \n", i+1, field[i][k], field[i][k+1], field[i][k+2],
            field[i][k+3], field[i][k+4]);
        i++;
    }
    printf("  1 2 3 4 5\n");
    i = 0;   // Counter = 0  

    return 0;
}
