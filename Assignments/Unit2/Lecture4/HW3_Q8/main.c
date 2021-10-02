#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char arr[100], temp, counter=0, length, reverse;
    printf("Enter the string: ");
    gets(arr);
    length = strlen(arr);
    reverse = length-1;
    for(counter ; counter<length ; ++counter)
    {
     if(reverse==counter)
            break;
     if((reverse+1)==counter)
            break;
     temp = arr[counter];
     arr[counter] = arr[reverse];
     arr[reverse] = temp;
     --reverse;
    }
    printf("Reverse string is : %s", arr);
    return 0;
}
