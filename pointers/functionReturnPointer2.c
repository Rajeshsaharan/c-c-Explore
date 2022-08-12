#include <stdio.h>
#include <stdlib.h>

//pass by refrence

int *add( int *a, int *b){ // *int because we want to return int* type address from function
    // int c = (*a) + (*b); // c is not a pointer varaible // c is a local varaible
    // return &c; // never use like this never return a local variable from function as pointer address
        int *c = (int*)malloc(sizeof(int)); // now c is stored in heap memory
        *c = (*a) + (*b);
        return c; // return address of pointer variable not c variable s original address

}

int main(){
    int a = 4, b= 3;
    int *ptr = add(&a, &b); // add return integar address so we have to store it any pointer variable
    printf(" %d", *ptr);


}