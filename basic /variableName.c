#include <stdio.h>

main(){
//always define variable before you use them

//variable name start from albhabate & cant use underscore
// to define charchater in c language ---> we can use char keyword
//= is known as assinment operator variable = data
char my_first_letter_of_name = 'r' ;// define char
int my_number = 2020; // define integar
//number always define without comma even there are a long number like 1000000
float my_percentage_of_12 = 86.20; //define floating number
//further can be used in printf function
printf("%c, %d, %f\n", my_first_letter_of_name, my_number, my_percentage_of_12 );
printf("hello world");
return 0;
}
