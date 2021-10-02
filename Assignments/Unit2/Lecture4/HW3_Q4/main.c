#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, counter, arr[100], new_num, location;
    printf("Enter no of elements : ");
    scanf("%d", &num);
    for(counter=0 ; counter<num ; counter++)
    {
    printf("\r\nEnter element %d : ", counter+1);
    scanf("%d", &arr[counter]);
    }
    printf("\r\nEnter the element to be inserted : ");
    scanf("%d", &new_num);
    printf("\r\nEnter the location : ");
    scanf("%d", &location);
    --location;
    for(counter=num ; counter>=location ; counter--)
    {
        arr[counter+1] = arr[counter];
    }
    arr[location] = new_num;
    num++;
    printf("\r\n");
    for(counter=0 ; counter<num ; counter++)
    {
        printf("%d", arr[counter]);
    }
    return 0;
}
