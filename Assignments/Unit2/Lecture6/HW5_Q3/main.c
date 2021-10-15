#include <stdio.h>
#include <stdlib.h>
struct complex
{
    float real;
    float imaginary;
};
void sum_complex(struct complex num_1, struct complex num_2);
int main()
{
    struct complex num_1, num_2;
    printf("For 1st complex number");
    printf("\r\nEnter real and imaginary respectively: ");
    scanf("%f %f", &num_1.real, &num_1.imaginary);
    printf("For 2nd complex number");
    printf("\r\nEnter real and imaginary respectively: ");
    scanf("%f %f", &num_2.real, &num_2.imaginary);
    sum_complex(num_1, num_2);
    return 0;
}
void sum_complex(struct complex num_1, struct complex num_2)
{
    struct complex sum;
    sum.real=num_1.real+num_2.real;
    sum.imaginary=num_1.imaginary+num_2.imaginary;
    printf("Sum=%.1f+%.1fi", sum.real, sum.imaginary);
}
