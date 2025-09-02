#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Student {
    char name[20];
    struct Date dob;
};

int main() {
    struct Student s = {"Amit", {1, 1, 2000}};
    printf("Name: %s, DOB: %02d/%02d/%04d\n", s.name, s.dob.day, 
        s.dob.month, s.dob.year);
    return 0;
}
