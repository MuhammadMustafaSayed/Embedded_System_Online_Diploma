#include <stdio.h>
#include <stdlib.h>
struct Distance
{
    int Feet;
    float inch;
};
int main()
{
    struct Distance distance_1, distance_2, sum;
    printf("Enter information for 1st distance");
    printf("\r\nEnter feet: ");
    scanf("%d", &distance_1.Feet);
    printf("\r\nEnter inch: ");
    scanf("%f", &distance_1.inch);
    printf("\r\nEnter information for 2nd distance");
    printf("\r\nEnter feet: ");
    scanf("%d", &distance_2.Feet);
    printf("\r\nEnter inch: ");
    scanf("%f", &distance_2.inch);
    sum.inch= distance_1.inch+distance_2.inch;
    sum.Feet= distance_1.Feet+distance_2.Feet;
    if(sum.inch>12)
    {
        sum.inch-=12;
        sum.Feet++;
    }
    printf("\r\nSum of distances=%d %.1f ", sum.Feet, sum.inch);
    return 0;
}
