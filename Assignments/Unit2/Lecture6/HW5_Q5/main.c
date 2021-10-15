#include <stdio.h>
#include <stdlib.h>
#define pi 3.1415
#define Area_of_circle(r) pi*r*r
int main()
{
    int radius;
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);
    printf("\r\nThe are of the circle = %.2f", Area_of_circle(radius));
    return 0;
}
