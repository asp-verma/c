#include <stdio.h>
#include <string.h>

void printarray(int *arr, int size){


    for (int i = 0; i < size; i++)
        printf("%d", *(arr + i))
};

int main()
{

    // char a[]="apple";
    // char b[]="banana";
    // //  to compare the string we have strcmp() method
    // int result=strcmp(a,b) ;

    // if(result==0)
    // printf("string are eqaul");
    // else
    // printf("string are not eqaul");

    // * poiniters :

    // int a = 10;

    // int *p = &a;  // & is the address of variable
    // printf("%d\n" ,*p );
    // printf("%p\n", p);

    // int *p = 20; // changed the value at address p
    // printf("%d", *p);

    int number[] = {1, 2, 3, 4, 5};
    printarray(number, 5);

    return 0;
}