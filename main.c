#include <stdio.h>

int main()
{
    char *name = "amit";    // Name is a string (char pointer)
    printf("%s\n", name);   // Safe: use %s for string

    int age = 31;           // Correct: 31 is an integer
    printf("%d\n", age);    // Safe: use %d for integer

    printf("hello\n");      // OK
    return 0;
}
