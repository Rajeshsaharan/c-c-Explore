#include <stdio.h>
main(){
int i;
//for loop can be used to iterate literal in the program

for(i =0 ; i < 3; i++){
printf("%d\n", i);
}

//break statment can be used to stop the loop on specific time or value of element
//continue skip or do something on specific element to send to next element

for(i = 0; i <= 10; i++){
if (i%2== 0){
printf("%d is an odd value\n", i);
continue; //  continue the loop without else statement

}
printf("%d is an even value\n", i);
}

}
