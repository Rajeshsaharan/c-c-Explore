#include <stdio.h>

main(){
// pointers are store variable address of another varaibel
int a = 10;
int *pA; // declare pointer varaible
pA = &a; // store pointer variable address on pointer variable
// to get value use *pA 
// a-----> value
// &a ----> address
// pA -----> adress
// *pA-----> value

int *c, b;
b = 23;
c = &b;
// to  get value of c we can use *c 
// but we cant  do that
//!important
int *d , e;
e = 29;
// we cant do that way
*d = &e; // because one is value and another one is address
// see more at https://www.programiz.com/c-programming/c-pointers

//but we can do that like way
int s = 20;
int *r = &a // right way because it means
// r = &a 



printf(" address of a variable : %d", &a);
printf("adrees of pointer reference : %d", pA);
printf("value of pointer variabel : %d", *pA);

}