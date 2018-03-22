/* Game of words */
#include <stdio.h>

int zero_field(char field[5][5]){
    /* Make all field position = Zero */
    int i = 0; 
    while(i < 5){
        int k = 0;
        field[i][k] = '0';
        field[i][k+1] = '0';
        field[i][k+2] = '0';
        field[i][k+3] = '0';
        field[i][k+4] = '0';
        i++;
    }
}

int centralword_field(char field[5][5]){
    /* Start word in our game. Set on center of field */
    field[2][0] = 'w';
    field[2][1] = 'o';
    field[2][2] = 'r';
    field[2][3] = 'd';
    field[2][4] = 's'; 
}


int show_field(char field[5][5]){
    /* Print our field on screen with scale */
    int i = 0;
    printf("  1 2 3 4 5\n");
    while(i < 5){
        int k = 0;
        printf("%d %c %c %c %c %c \n", i+1, field[i][k], field[i][k+1], field[i][k+2],
            field[i][k+3], field[i][k+4]);
        i++;
    }
    printf("  1 2 3 4 5\n \n");
}

int player_turn(char field[5][5]){

    char line[100];              // Input line
    char letter;                 // Letter
    int a,b;                     // Coordinats of letter
    char word[25];               // Word

    // Input date of gamer
    printf("Введите букву кооридинаты и слово в формате 1 2 m worm: \n");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d %c %25s", &a, &b, &letter, word);

    printf("%d %d %c %s \n \n", a, b, letter, word);
    
    //Simple check of validation
    if (field[a-1][b-1] == '0'){
        field[a-1][b-1] = letter;
    }
    else{
        printf("Клетка уже занята \n");
    }
}

int main(){
    
    char field[5][5];            // Our field

    zero_field(field);          // Make all field position = Zero 
    show_field(field);          // Print our field on screen with scale 
    centralword_field(field);   // Start word in our game. Set on center of field
    show_field(field);          // Print our field on screen with scale
    player_turn(field);         // Input date of gamer
    show_field(field);          // Print our field on screen with scale

    return 0;
}