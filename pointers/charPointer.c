#include <stdio.h>

main(){
char name[] = "rajesh"; // as we know name is also a pointer value like *name or addres is &name or &name[0]
char *pname ; // we are defining pname pointer with an rendom memory
// to fill with our memory we can use like that
//pointer to char array

pname = &name ;// now pname have char array address
printf("%d", pname);

// now i can run loop on pointer pname
for (int i =0; i < 6; i++){
    printf("item : %c\n" , *(pname+i)); // same thing we mention new pointer instead using original one
    printf("item : %c\n" , *(name+i));
}

//another way
char *last_name = "rajesh saharan";
//it means last_name = &"rajesh saharan" // because string "rajesh saharan" store somewhere location in the program



//here how it works
if(last_name == &"rajesh saharan"){
    printf("YES YOU ARE RIGHT");
}else{
    printf("YOU ARE NOT RIGHT");
}

//if we change address we can store that way

last_name = &"amit singh";

if(last_name = &"amit singh"){
printf ("YES LOCATION ADDRESS OF POINTER HAS BEEN CHANGED");
}else{
    printf("YOU ARE WRONG");
}

//know if we want to print data from pointer

// printf(" %s", *last_name); // but we cant print like that we need to iterate through loop

for (int i =0 ; i <13; i++){
    printf("%c\n", last_name[i]);
    // but here we cant change value / gets(), last_name[0]= modfied_value or strcpy methods cant used to use them you need to pointer a char array in memory
}


}