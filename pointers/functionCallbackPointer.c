#include <stdio.h>


//declaring a function that takes function as args

void func(void (*ptr)()){
    ptr(); //callback is called 
}

void func2(){
    printf("hello world");
}

main(){

    void (*ptr)() = func2; //ptr is pointer to function func2 address
    func(ptr); //ptr is now passed as callback 




}