#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[15]={0}, size, counter;
    printf("Input the number of elements to store in the array (max 15) : ");
    scanf("%d", &size);
    printf("\r\nInput 5 number of elements in the array : ");
    for(counter=0; counter<size; ++counter)
    {
        printf("\r\nelement - %d : ", counter+1);
        scanf("%d", &arr[counter]);
    }
    printf("\r\nThe elements of array in reverse order are : ");
    for(counter=size-1; counter>=0; --counter)
    {
        printf("\r\nelement - %d : %d", counter+1, arr[counter]);
    }

    return 0;
}
