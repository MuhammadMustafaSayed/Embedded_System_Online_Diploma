#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100], counter=0;
    printf("Enter a string: ");
    gets(arr);
    while(arr[counter]!='\0')
    {
        counter++;
    }
    printf("Length of string: %d", counter);
    return 0;
}
