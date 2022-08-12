
#include <stdio.h>

my1Dfunction(int* a){
    //passing 1d array to function
    printf("%d", *(a+1)); //getting first element from 1d array


}


my2Dfunction(int (*b)[2]){
    //passing 2D array to function as args
    // c only handle 1d array as args so you have to change it in args

      printf("array item   : %d\n", *(*(b+1)+0)); //expected output should be 3
}

my3Dfunction(int (*c)[2][2]){
    printf(" item : %d",*(*(*(c+1)+0)+1)) ; // output 6
}


main(){

   //passing 1d array to  function

   int a[] = {1,2,3};
   int b[2][2] = {{1,2}, {3,4}}; // 2d array
   int c[2][2][2] = {{{1,2}, {3,4}},{{5,6}, {7,8}}}; // 3d array

   printf("item : %d\n", *(*(b+1)+0));
   printf(" test item : %d", *(*(*(c+1)+0)+1)) ;
   my1Dfunction(a); //passing 1D array
   my2Dfunction(b); //passing 2D array or address of array
   my3Dfunction(c);
}