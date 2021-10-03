#include <stdio.h>
#include <stdlib.h>

void prime(int x, int y);
int main()
{
    int num1, num2;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &num1, &num2);
    printf("\r\n");
    prime(num1, num2);
    return 0;
}
void prime(int x, int y)
{
    int arr[100]={0}, counter=1, i, arr_counter=0, flag=0, j;
    while((x+counter)!=y)
    {
        for(i=1; i<=(x+counter); i++)
        {
            if(((x+counter)%i)==0)
                flag++;
        }
        if (flag==2)
        {
            arr[arr_counter]=x+counter;
            arr_counter++;
        }
        counter++;
        flag=0;
    }
    printf("Prime numbers between %d and %d are: ", x, y);
    for(j=0;j<arr_counter;j++)
    {
        printf("%d ",arr[j]);
    }
}
