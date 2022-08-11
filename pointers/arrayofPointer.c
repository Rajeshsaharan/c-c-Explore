#include <stdio.h>


main(){

    //array of pointers

    char *names[3];
    char a = 'r', b = 'a', c = 'k';
    names[0] = &a;
    names[1] =&b;
    names[3] = &c;

   printf(" %c", *names[0]);


   char *names2[]= {"rajesh", "amit", "rakesh"};
 // string and array are by defaul pointers refrence to base element

   printf(" %s", names2[0]); //string iterator can be printed directly using names2[0]

//example

int r[4] = {1, 2,3,4}; // r is an pointer
// a is pointer 
printf(" %d", *r);

char v[5] = {'a','m','i','t', '\0'};
printf(" %c", *v);


//string dont need & or * for pointer

char s[5] = "ranu";
printf(" %s", s);

}
