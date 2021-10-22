#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m=29, *ab=(int *)0;
    printf("Address of m : %p", &m);
    printf("\r\nValue of m : %d", m);
    ab = &m;
    printf("\r\nNow ab is assigned with the address of m.");
    printf("\r\nAddress of pointer ab : %p", ab);
    printf("\r\nContent of pointer ab : %d", *ab);
    m=34;
    printf("\r\nThe value of m assigned to 34 now.");
    printf("\r\nAddress of pointer ab : %p", ab);
    printf("\r\nContent of pointer ab : %d", *ab);
    *ab = 7;
    printf("\r\nThe pointer ab is assigned with the value 7 now.");
    printf("\r\nAddress of m : %p", &m);
    printf("\r\nValue of m : %d", m);

    return 0;
}
