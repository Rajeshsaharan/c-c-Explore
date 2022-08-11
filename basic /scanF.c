#include <stdio.h>
main(){
    char first_letter_of_name, last_letter_of_name; //initilzation
    int age;

    printf("please type your first letter of your name\n");
    scanf("%c", &first_letter_of_name);

//in control string we use space before using conersion char because it will ignore all /n /t or any space within input
// read more about here --> https://www.codesdope.com/discussion/why-are-you-using-a-space-before-c-in-scanf-c-ch/
//we use ampersand before nonarray data types to provide refernce data type
    printf("please type your last name of letter\n");
    scanf(" %c", &last_letter_of_name);

    printf("please type your age\n");
    scanf("%d", &age);

    printf("your first name satart with %c and end with %c and your age is %d", first_letter_of_name, last_letter_of_name, age);
    return 0;
}
