#include <stdio.h>

/* A serial transmission line can transmit 960 characters each second.  *
* Write a program that will calculate the time required to send a file, *
* given the file's size. Try the program on a 400MB (419,430,400 -byte) *
* file. Use appropriate units. (A 400MB file takes days.)              */

/* Если считать что 1 знак равен 1 байту в ASCHII кодировке, то чтобы  *
* узнать необходимое время нужно будет Кол-во байтов / 960 и мы узнаем *
* искомое время передачи в секундах.                                  */

const int SPEED = 960;   /* Скорость передачи байтов за 1 секунду */
char line[100];          /* Линия ввода                           */
int data;                /* Количество передаваемой информации    */
int time;                /* Время передачи */

int main()
{
    printf("Программа для расчета времени передачи информации,результат\n");
    printf("вычислений будет округлен \n");
    printf("Введите количество информации в байтах: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line,"%d", &data);

    time = data / SPEED;
    
    if (time < 3600){
        printf("Для передачи понадобится %d секунд \n", time);
    } else if  (time < 86400){
        time = time / 360;
        printf("Для передачи понадобится %d часов \n", time);
    } else {
        time = time / (360 * 24);
        printf("Для передачи понадобится %d дней \n", time);
    } 
    return (0);

}