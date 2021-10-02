#include <stdio.h>
#include <stdlib.h>

int main()
{
    char arr[100], character, frequency=0, counter=0;
    printf("Enter a string: ");
    gets(arr);
    printf("\r\nEnter a character to find frequency: ");
    scanf("%c", &character);
    while(arr[counter]!='\0')
    {
        if(arr[counter]==character)
            frequency++;
        counter++;
    }
    printf("Frequency of %c = %d", character, frequency);
    return 0;
}
