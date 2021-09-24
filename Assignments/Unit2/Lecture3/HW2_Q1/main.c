#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("Enter an integer you want to check: \r\n");
    scanf("%d", &x);
    if(x%2)
        printf("%d is odd", x);
    else
        printf("%d is even", x);
    return 0;
}
