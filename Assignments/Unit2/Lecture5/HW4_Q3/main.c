#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * reverse_string(char string[]);
int main()
{
    char arr[100], *reversed=NULL;
    printf("Enter the string: ");
    gets(arr);
    reversed = reverse_string(arr);
    printf("Reverse string is : %s", arr);
    return 0;
}
char * reverse_string(char string[])
{
 static char temp=0, counter=0, flag=0, reverse;
     if (flag==0)
     {
         reverse=(strlen(string))-1;
         flag=1;
     }
     if(reverse==counter)
     {
            return string;
     }
     if((reverse+1)==counter)
      {
            return string;
      }
     temp = string[counter];
     string[counter] = string[reverse];
     string[reverse] = temp;
     --reverse;
     ++counter;
     return reverse_string(string);

}
