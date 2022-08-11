#include <stdio.h>

main(){
// array pointer 
int x[] = {1,2,3,4}; // x is a in built pointer like *x
printf("address of x array : %d\n", x);// x array pointer
printf("address of x array 0 : %d\n", &x[0]);
printf("address of x array  1: %d\n", &x[1]);
printf("address of x array  2: %d\n", &x[2]);
printf("address of x array  3: %d\n", &x[3]);
printf("value of x array : %d", *x); // value of x array pointer
// in my compiler 1int takes 4 byte so imagine 
// x address is 4 than adding one takes it to 8 & 8 is the fecond elment's address so
// x = &x[0] // 4 =4
// x +1 = &x[1] // 8 = 8
// x + 2 = &x[2]
// x + 3 = &x[3]

// and so on 
// *x gives value
// *x = x[0]
// *(x+1) = x[1]
// *(x+2) = x[2]
// *(x+3) = x[3]



// iterate through pointer

for (int i = 0 ; i< 4; i++){
    printf("items : %d\n", *(x+i));
}





}