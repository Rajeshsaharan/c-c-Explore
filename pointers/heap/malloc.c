#include <stdio.h>

main(){
    // how to allocate memory from head


    int *p;
    p = (int*)malloc(4* sizeof(int));
    // malloc return void value of address so we can change into int type using type cast
    // now we can assign value to it
    *p = 23;
     // but we have size of arary is 16 byte so we can assign many more elements
    
    //to free thre memeory we can use
    free(p);
}