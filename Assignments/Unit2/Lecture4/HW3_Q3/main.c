#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix[10][10], transpose[10][10], rows, columns, i, j;
    printf("Enter rows and columns of matrix:\r\n");
    scanf("%d %d", &rows, &columns);
    printf("Enter elements of matrix:\r\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            printf("\r\nEnter element a%d%d: ", i+1, j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("Entered matrix:\r\n");
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            printf("%d  ", matrix[i][j]);
        }
        printf("\r\n");
    }
    for(i=0 ; i<rows ; i++)
    {
        for(j=0 ; j<columns ; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose of matrix:\r\n");
    for(i=0 ; i<columns ; i++)
    {
        for(j=0 ; j<rows ; j++)
        {
            printf("%d  ", transpose[i][j]);
        }
        printf("\r\n");
    }

    return 0;
}
