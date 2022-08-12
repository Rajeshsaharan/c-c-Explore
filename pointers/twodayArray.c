#include <stdio.h>

main(){
    
  int a[2][2][2] = {{{1,2},{3,4}}, {{5,6},{7,8}}};
  //access 3
  printf(" %d", *(*(*(a+0)+1)+0));
  //access 3 without any pointer

  printf("%d", a[0][1][0]);
  //access location of 3
  printf("%d", (*(*(a+0)+1)+0));
  //access location of 3 without pointer

  printf("%d", &a[0][1][0]);


  char names[2] = {'r', 's'};
  // access second string from char array

  printf(" %c", *(names+0));


  char usernames[] = "amit";
  printf(" %c", *(usernames+1));

  //print out all string using pointer
      int i;
      while(*(usernames+i)!= '\0'){
        printf("%c", *(usernames+i));
        i++;
      }

// what is void pointer 
//void pointer can not derence 

void *p = &a;
// void pointer is genaric type pointer to change it to a special type data type you need
//typecasting
char *l = (char*)p; //here p is a void address pointer


}