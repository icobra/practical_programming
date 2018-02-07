#include <stdio.h>

/*  Write a program to perform date arithmetic such as *
*   how many days there are between 6/6/90 and 4/3/92. *
*   Include a specification and a code design.         */

/* Линии ввода данных */
char line1[100];
char line2[100];

int full_year1[12] = {0, 0, 0, 0, 0, 30, 31, 31, 30, 31, 30, 31};       /* 90 year */
int full_year2[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};  /* 91 year */
int full_year3[3] = {31, 29, 4};                                        /* 92 year */ 

int day1, month1, year1;           /* Дни начала поиска */
int day2, month2, year2;           /* Дни конца поиска */
int day3, month3, year3, date;     /* Вспомогательные вещи + искомая дата */

int main()
{
    printf("Подсчет оставшегося времени до даты. \n");
    printf("Рассчет ведется между 6.6.90 и до 4.3.92 гг.. \n");
    printf("Введите дату начала поиска в формате день месяц год: ");
    fgets(line1, sizeof(line1), stdin);
    sscanf(line1, "%d %d %d", &day1, &month1, &year1);

    printf("Введите дату конца поиска в формате день месяц год: ");
    fgets(line2, sizeof(line2), stdin);
    sscanf(line2, "%d %d %d", &day2, &month2, &year2);

    // Сохраняем значения в переменные для вывода
    day3 = day2;
    month3 = month2;
    year3 = year2;

    //так как мы используем текущий месяц, а массив считает с 0 
    month1 -= 2;
    month2 -= 2;   
    

    /* часть для начальной даты *
    *  лучше бы это обернуть в функцию */

    if ((year1 == 90) || (year1 == 1990)){
        while(month1 >= 0){
            day1 = day1 + full_year1[month1];
            --month1;
        }

    } else if ((year1 == 91) || (year1 == 1991)){
        day1 = day1 + 214;  // Ровно столько дней в первом году
        while(month1 >= 0){
            day1 = day1 + full_year2[month1];
            --month1;
        }
    } else if ((year1 == 92) || (year1 == 1992)){
        day1 = day1 + 579;  // Ровно столько дней в первом и втором году
        while(month1 >= 0){
            day1 = day1 + full_year3[month1];
            --month1;
        }
    } else {
        /* Для корректной даты нужна более сложная проверка */
        printf("ERROR. ОШИБКА. Введен не корректный год.");
    }
    
    /* часть для конечной даты *
    *  лучше бы это обернуть в функцию */
    if ((year2 == 90) || (year2 == 1990)){
        while(month2 >= 0){
            day2 = day2 + full_year1[month2];
            --month2;
        }
    } else if ((year2 == 91) || (year2 == 1991)){
        day2 = day2 + 214;   // Ровно столько дней в первом году
        while(month2 >= 0){
            day2 = day2 + full_year2[month2];
            --month2;
        }
    } else if ((year2 == 92) || (year2 == 1992)){
        day2 = day2 + 579;  // Ровно столько дней в первом и втором году
        while(month2 >= 0){
            day2 = day2 + full_year3[month2];
            --month2;
        }
    } else {
        /* Для корректной даты нужна более сложная проверка */
        printf("ERROR. ОШИБКА. Введен не корректный год.");
    }
    
    date = day2 - day1; // Расчет остатка дней между датами
    printf("До %d/%d/%d осталось %d дней.\n", 
        day3, month3, year3, date);

    return(0);

}