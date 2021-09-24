#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    printf("Enter an alphabet: \r\n");
    scanf("%c", &x);
    switch(x)
    {
    case 'o' :
    case 'O' :
    printf("%c is a vowel",x);
    break;
    case 'i' :
    case 'I' :
    printf("%c is a vowel",x);
    break;
    case 'e' :
    case 'E' :
    printf("%c is a vowel",x);
    break;
    case 'a' :
    case 'A' :
    printf("%c is a vowel",x);
    break;
    case 'u' :
    case 'U' :
    printf("%c is a vowel",x);
    break;
    default:
    printf("%c is a consonant",x);
    break;
    }
    return 0;
}
