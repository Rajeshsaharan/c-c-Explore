#include <stdio.h>

// pass by value 
int func(int a, int b){
     int c = a + b;
     return c;

}



main(){

int a = 3, b = 4;
// we want to add both numbers using func
int total = func(a, b);
printf("%d", total);



}

// but above example we are using copy of a & b local variable to func 

//doing using by pointer

//read functionReturnPointer2.c


