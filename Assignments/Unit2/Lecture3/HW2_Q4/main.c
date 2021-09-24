#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x;
    printf("Enter a number: \n");
    scanf("%f", &x);
    if(x>0)
        printf("%f is positive", x);
    else if(x<0)
        printf("%f is negative", x);
    else
        printf("You entered zero");
    return 0;
}
