#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define message "Hello!"


int main(int argc, char* argv[])
{
    printf("%s", message);
    printf("Please enter your first name: \n");
    char first_name[25];
    scanf("%s", first_name);
    printf("Please enter your last name: \n");
    char last_name[25];
    scanf("%s", last_name);
    printf("Your full name is %s %s", first_name, last_name);
    

    return 0;
}