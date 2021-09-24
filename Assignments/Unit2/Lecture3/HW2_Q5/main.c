#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Enter a character: \r\n");
    scanf("%c", &x);
    if((x>64&&x<91)||(x>96&&x<123))
        printf("%c is an alphabet",x);
    else
        printf("%c is not an alphabet",x);
    return 0;
}
