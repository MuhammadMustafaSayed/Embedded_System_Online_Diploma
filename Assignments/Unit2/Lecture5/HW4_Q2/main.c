#include <stdio.h>
#include <stdlib.h>

int factorial(int x);
int main()
{
    int num, factorial_value;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    factorial_value = factorial(num);
    printf("\r\nFactorial of %d = %d", num, factorial_value);
    return 0;
}
int factorial(int x)
{
    if(x>0)
        return x*factorial(x-1);
    else
        return 1;
}
