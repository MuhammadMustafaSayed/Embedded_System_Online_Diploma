#include <stdio.h>
#include <stdlib.h>

int main()
{
    double arr1[2][2], arr2[2][2];
    int row=0, column=0;
    printf("Enter the elements of 1st matrix\r\n");
    for(row=0 ; row<2 ; row++)
    {
        for(column=0 ; column<2 ; column++)
        {
            printf("Enter a%d%d:", row+1, column+1);
            scanf("%lf",&arr1[row][column]);
            printf("\r\n");
        }
    }
    printf("Enter the elements of 2nd matrix\r\n");
    for(row=0 ; row<2 ; row++)
    {
        for(column=0 ; column<2 ; column++)
        {
            printf("Enter b%d%d:", row+1, column+1);
            scanf("%lf",&arr2[row][column]);
            printf("\r\n");
        }
    }
    printf("Sum Of Matrix:\r\n");
    printf("%.1lf      %.1lf\r\n", arr1[0][0]+arr2[0][0], arr1[0][1]+arr2[0][1]);
    printf("%.1lf      %.1lf\r\n", arr1[1][0]+arr2[1][0], arr1[1][1]+arr2[1][1]);
    return 0;
}
