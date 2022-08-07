#include <stdio.h>

main(){
//printf is a builtin function from stdio header
//printf function are used to output to screen
//printf(controlstring, data) // controlstring is optional
//we can use escape sequence to printf's control string to control our output on screen
//string data can be stored in only double quotes
printf("hey my name is rajesh start fromn %c\n", 'r');// first is control string & second is data
//we can use only data to use printf function
printf("this is only string data\a");

//escape sequence
// \n --for new line
// \t ---for tab
// \b ----for backspace
// \\ ----- for backslash
// \' ---- for single quote
// \" -----for double quote


return 0;
}
