#include <stdio.h>
#include <stdlib.h>
struct employee
{
    char name[20];
    int id;
};
int main()
{
    struct employee * ptr_to_struct=NULL;
    struct employee * (* ptr_to_arr)[]=NULL;
    struct employee member = {"Alex" , 1002};
    struct employee *arr[1] ;
    ptr_to_struct = &member;
    ptr_to_arr = arr;
    arr[0] = ptr_to_struct;
    printf("Exmployee Name : %s", (**ptr_to_arr)->name);
    printf("\r\nEmployee ID : %d", (**ptr_to_arr)->id);
    return 0;
}
