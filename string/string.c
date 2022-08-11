#include <stdio.h>
#include <string.h>

main(){
//c doesnt have string data type
//every string have null zero(string terminator end of string value)
// like rajesh ---> r a j e s h \0 takes 6 bytes in the memory
// the length of string doesnt count value null zero

//diffrence between char and string
// 'x'----> char length ->1 take one byte in memory
// "x" -----> string length -->1, x & \0(null zero) take 2 bytes in memory
//how to define string in c we can use char array
char name[7] = "rajesh"; // 6 for every element start 0 to 5 index & one last for null zero
//           r a j e s h \0
//length     1 2 3 4 5 6---> length is 6
//index      0 1 2 3 4 5 6
//char store 1 2 3 4 5 6 7---> so we defined char array with 7 element
//we can define char array more than elments number but never define fewer than all char elements
printf("%s\n", name);// we can use %s for conersion factor for string
//we can change every element of char array like this // in c char array are mutable
name[0] = 'a';
name[1] = 'm';
name[2] = 'i';
name[3] = 't';
name[4] = '\0';// you must add this otherwise name char array have alreay a null zero value at index 6
printf("%s", name);
//if you define char array & intilize same time you dont need to use bracket
char course[] = "brt"; // automatically added 3 index & 4 char memory including null xero end of char array
printf("%s\n", course);
char last_name[] = "poonia";
printf("%s\n", last_name); //output ----> poonia
// wrong way last_name = "saharan"
// but we can do that for rest of data types like int, float, char
int age = 10;
age = 12; // successfully changed or reassigned

// to change last_name we can use strcpy function
//strcpy(char array name, "value you want to change");
strcpy(last_name, "saharan"); //to use strcpy we need to include header file string.h
printf("%s\n", last_name);

}
