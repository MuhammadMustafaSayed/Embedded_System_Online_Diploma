#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b;
    printf("Enter value of a: \r\n");
    scanf("%d", &a);
    printf("Enter value of b: \r\n");
    scanf("%d", &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping, value of a = %d\r\n", a);
    printf("After swapping, value of b = %d\r\n", b);
    return 0;
}
