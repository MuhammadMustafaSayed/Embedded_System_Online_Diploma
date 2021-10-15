#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    char roll;
    float marks;
};
int main()
{
    struct student students[10];
    int i;
    printf("Enter information of students: ");
    for(i=0;i<10;i++)
        {
            printf("\r\nFor roll number: %d", i+1);
            students[i].roll=i+1;
            printf("\r\nEnter name: ");
            scanf("%s", students[i].name);
            printf("\r\nEnter marks: ");
            scanf("%f", &students[i].marks);
        }
    printf("\r\nDisplaying Information");
    for(i=0;i<10;i++)
        {
            printf("\r\nInformation for roll number %d:", students[i].roll);
            printf("\r\nName: %s", students[i].name);
            printf("\r\nMarks: %.2f", students[i].marks);
        }
    return 0;
}
