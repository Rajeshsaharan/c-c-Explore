#include <stdio.h>


int square(int a){
    return a*a;
}

int addNumber(int a, int c, int (*callback)(int) ){ //passing callback function and calling it within
    int b = callback(c);
    int x = a + b;
    return x;
}


void main(){

    // int (*mycallback)(int) = & square;
    int total = addNumber(2,3,square); // can be passed directly becasue function gives pointer
    printf("%d", total); //expected output will be 11


}