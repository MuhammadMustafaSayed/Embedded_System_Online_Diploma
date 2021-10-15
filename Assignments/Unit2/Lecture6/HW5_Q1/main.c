#include <stdio.h>
#include <stdlib.h>
struct student
{
    char* name;
    char roll;
    float marks;
};
int main()
{
    struct student student;
    printf("Enter information of students: ");
    printf("\r\nEnter name: ");
    scanf("%s", student.name);
    printf("\r\nEnter roll number: ");
    scanf("%d", &student.roll);
    printf("\r\nEnter marks: ");
    scanf("%f", &student.marks);
    printf("\r\nDisplaying Information");
    printf("\r\nName: %s", student.name);
    printf("\r\nRoll: %d", student.roll);
    printf("\r\nMarks: %.2f", student.marks);
    return 0;
}
