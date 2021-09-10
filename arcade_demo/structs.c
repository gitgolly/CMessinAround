#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#if defined(__linux__)
#include "linux_only.h"
#endif

struct OperatingSystem
{
    char name[20];
    char architecture[10];
};

struct Person
{
    char name[25];
    int age;
    char hobby[25];
};

void introduce(struct Person obj)
{
    printf("Hello! My name is %s, I am %d and I like %s. Nice to meet you!\n", obj.name, obj.age, obj.hobby);

}

int main(int argc, char** argv)
{
    // object
    struct OperatingSystem os;

    // object
    struct Person person;
    // initizlizing person fields
    person.age = 14;
    strcpy(person.name, "Brooke");
    // initializing os fields
    strcpy(os.name, "Cinix");
    strcpy(os.architecture, "x86");
    printf("%s is a %s-based operating system for home computers and mobile devices.\n", os.name, os.architecture);

    // object
    struct Person p1;
    // initializing p1 fields
    p1.age = 14;
    strcpy(p1.name, "Khila");
    strcpy(p1.hobby, "Drawing");
    introduce(p1);
    message();


    return 0;
}