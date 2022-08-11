#include <stdio.h>

// we are going all example by pointer

main(){
// first example by int

int a = 10;
// directly can be access by a(%d)
int *Pa;
Pa = &a; //  Pa have a address 
// access by *Pa

char word = "r";
//directly can be access by word(%c)
char * Pword;
Pword = &word ; //Pword have now word accesss
// access by *Pword

char name[] = "amit";
//directly can be access by name(%s)
char *Pname = name;
//now *Pname cant access by *Pname we can use for loop
//here name is already a pointer that refers to &a[0] address
// ------------------------------------------------
char *first_name = "amit singh";
first_name = "rakesh saharan";


int l[] = {1,2,3};
//now l is already a pointer to first element address
//every element can be access by *l, *(l+1), *(l+2) or l[0], l[1], l[2]

int *k[] ={1,2,3} ;//now every k[i] is pointer to their refrence item


char j = {'r', 'a', 'j'} ;// j is now pointer to first item of array
//every element can be access by *j, *(j+1), *(j+2) or j[0], j[1], j[2]
char *j[] = {'r', 'a', 'j'}; // every items is an pointer to their refrence index
//every element can be access by *j[i]


char *name[] = {"rajesh", "suresh"};

//now every string can be access by name[i]




}