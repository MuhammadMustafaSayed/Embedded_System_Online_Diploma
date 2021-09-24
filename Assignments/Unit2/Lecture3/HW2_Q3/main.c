#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, z;
    printf("Enter three numbers: \r\n");
    scanf("%f %f %f", &x, &y, &z);
    if((x>y&&x>z)||(x>y&&x==z)||(x>z&&x==y))
        printf("Largest number = %f\r\n",x);
    else if((y>x&&y>z)||(y>x&&y==z)||(y>z&&y==x))
        printf("Largest number = %f\r\n",y);
    else if((z>x&&z>y)||(z>x&&z==y)||(z>y&&z==x))
        printf("Largest number = %f\r\n",z);
    else
        printf("The three numbers have the same value = %f",x);
    return 0;
}
