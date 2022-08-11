#include <stdio.h>

main(){

// array is group of same data type variable
// define non array variable
int a;
// define a array variable
int b[10] ;
// now  b array contains 10 same data type variable
int c[] = {1,2,3,4,5,6,7,8,9, 10};
char ch[] = {'r', 'a', 'j', 'e', 's', 'h'}; // not a string array because string array contains null zero end of that
char name[] = "rajesh"; // string array
char name2[] = {'r', 'a', 'j', 'e', 's', 'h', '\0'};

//now every element in c can be accessed by c[index]
//example
int i;
for (i =0; i<= 10; i++){
    printf("%c\n", name[i]);
}

}