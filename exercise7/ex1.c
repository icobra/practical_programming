#include <stdio.h>

/* convert English units to metric (i.e., miles to  *
* kilometers, gallons to liters, etc.).            */

char line[100];        /* inpute line */
float number;            /* number of something */
char unit;             /* unit */
float result;            /* the result of the calculations */

int main()
{
    /* Loop forever (or till we hit the break statement) */
    while (1) {
        result = 0; /* initialize the result */
        printf("If you ned convert some units use like this\n");
        printf("*********************************************************\n");
        printf("a 100   - when a - lenght or mass, Q to exit             \n");
        printf("        - 100  -  you number                             \n");
        printf("---------------------------------------------------------\n");
        printf("lennght:                 mass:                           \n");
        printf(" l - line to millimeter    p - pound to gram             \n");
        printf(" y - yard  to decimeter    s - stone to killogram        \n");
        printf(" m - mile  to kilometer    w - wey to killogram          \n");
        printf("*********************************************************\n");
        printf("Enter you volume: ");

        fgets(line, sizeof(line), stdin);
        sscanf(line, "%c %f", &unit, &number);

        if ((unit == 'q') || (unit == 'Q'))
            break;

        if (unit == 'l') {
            result = number * 1.5;
        } else if (unit == 'y'){
            result = number * 9;
        } else if (unit == 'm'){
            result = number * 1.6;
        } else if (unit == 'p'){
            result = number * 500;
        } else if (unit == 's'){
            result = number * 6.25;
        } else if (unit == 'w'){
            result = number * 75;
        } else {
            printf("Unknown unit %c\n", unit);
        }
        printf("Result: %f\n", result);
    }
    return (0);
}
