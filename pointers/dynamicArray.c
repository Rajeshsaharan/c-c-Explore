#include <stdio.h>

main(){
    int n ;
    char *myarray;
    printf("how much element you want to store \n");
    scanf(" %d", &n);
    myarray = (char*)malloc(n*sizeof(char)); // gives n element space to my array address of char array
    for (int i =0 ; i < n ; i++){
        printf("please type your myarray[%d]", i);
        // scanf(" %c", &myarray[i]);
        scanf(" %c", myarray + i); // both are right

    }

    for (int i = 0; i < n; i++){
        printf(" items : %c\n", *(myarray + i));
    }
}