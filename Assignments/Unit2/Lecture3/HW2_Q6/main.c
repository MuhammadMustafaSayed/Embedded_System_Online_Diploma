#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, sum;
    printf("Enter an integer: \r\n");
    scanf("%d", &x);
    while(x!=0)
    {
        sum = sum + x;
        x--;
    }
    printf("Sum = %d",sum);
    return 0;
}
