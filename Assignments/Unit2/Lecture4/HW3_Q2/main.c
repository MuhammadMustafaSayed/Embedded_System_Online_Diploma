#include <stdio.h>
#include <stdlib.h>

int main()
{
    float arr[100], average=0;
    int num, index;
    printf("Enter the number of data:");
    scanf("%d",&num);
    for(index=0 ; index<num ; index++)
    {
        printf("\r\nEnter number:");
        scanf("%f",&arr[index]);
    }
    for(index=0 ; index<num ; index++)
    {
       average+=arr[index];
    }
    average/=num;
    printf("\r\nAverage = %.2f",average);
    return 0;
}
