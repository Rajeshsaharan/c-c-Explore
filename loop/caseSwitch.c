#include <stdio.h>
#include <stdlib.h>

int main()
{
    // case switch are used to replace with nested if else statments
    // a simple program with case switch
    int choice;
    printf("please enter your choice");
    scanf(" %d", &choice);

    switch (choice)
    {
    case 1:
        printf("you seletced 1 ");
        break;
    case 2:
        printf("you selected 2");
        break;
    case 3:
        printf("you selected 3");
        break; // break keyword is very important for stop the loop 

    default:
        printf("you selcted nothing");
        exit(0); //exit return to os
        break;
    }

    return 0;
}