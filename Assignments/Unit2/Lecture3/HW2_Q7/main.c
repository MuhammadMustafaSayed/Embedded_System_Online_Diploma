#include <stdio.h>
#include <stdlib.h>

int main()
{
     int x, mul=1;
    printf("Enter an integer: \r\n");
    scanf("%d", &x);
    if(x>0)
    {
    while(x>0)
    {
        mul = mul * x;
        x--;
    }
    printf("Factorial = %d",mul);
    }
    else if(x==0)
    printf("Factorial = %d", 1);
    else
    printf("Error!!! Factorial of negative number doesn't exist");

    return 0;
}
