#include <stdio.h>

int func(int a, int b){
    return a+b;
}

int main(){
  // to point add function we can use pointer

  int (*pointerFunc)(int , int);  // int pointer must be same 
  pointerFunc = &func;  // pointer to function address 
  int c = pointerFunc(3,4); // now pointerFunc can be called
  printf("%d", c);

}

//function pointer can be used as args to a function to use callback
//see functionCallbackPointer.c
