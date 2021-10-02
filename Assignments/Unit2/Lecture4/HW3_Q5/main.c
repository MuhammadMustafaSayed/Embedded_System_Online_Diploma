#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, counter, arr[100], searched_num, location;
    printf("Enter no of elements : ");
    scanf("%d", &num);
    for(counter=0 ; counter<num ; counter++)
    {
    printf("\r\nEnter element %d : ", counter+1);
    scanf("%d", &arr[counter]);
    }
    printf("\r\nEnter the element to be searched : ");
    scanf("%d", &searched_num);
    for(counter=0 ; counter<num ; counter++)
    {
        if(arr[counter]==searched_num)
        {
            location = counter + 1;
            printf("Number found at the location = %d\r\n", location);
            break;
        }
    }
    if(counter==num)
        printf("The number was not found\r\n");
    return 0;
}
