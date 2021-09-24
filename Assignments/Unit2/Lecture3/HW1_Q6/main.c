#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, temp;
    printf("Enter value of a: \r\n");
    scanf("%f", &a);
    printf("Enter value of b: \r\n");
    scanf("%f", &b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping, value of a = %f\r\n", a);
    printf("After swapping, value of b = %f\r\n", b);
    return 0;
}
