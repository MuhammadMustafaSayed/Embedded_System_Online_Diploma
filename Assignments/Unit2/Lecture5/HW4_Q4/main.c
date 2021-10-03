#include <stdio.h>
#include <stdlib.h>

int num_power(int num, int power);
int main()
{
    int num, power, value;
    printf("Enter base number: ");
    scanf("%d", &num);
    printf("Enter power number(positive integer): ");
    scanf("%d", &power);
    value = num_power(num, power);
    printf("\r\n%d^%d = %d", num, power, value);
    return 0;
}
int num_power(int num, int power)
{
    if(power>0)
        return num*num_power(num, power-1);
    else
        return 1;
}
