#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    float x, y;
    printf("Enter operator either + or - or * or /:\r\n");
    scanf("%c", &operator);
    printf("Enter two operands: \r\n");
    scanf("%f %f", &x, &y);
    switch(operator)
    {
        case '*':
        printf("%f %c %f = %f\r\n", x, operator, y, x*y);
        break;
        case '-':
        printf("%f %c %f = %f\r\n", x, operator, y, x-y);
        break;
        case '+':
        printf("%f %c %f = %f\r\n", x, operator, y, x+y);
        break;
        case '/':
        printf("%f %c %f = %f\r\n", x, operator, y, x/y);
        break;
    }
    return 0;
}
