#include <stdio.h>
main(){
int number1, number2 ;
char choice ;
//as we know do while loops runs always first time to take conditional input to while
do{
printf("type your first number\n");
scanf(" %d", &number1);
printf("please type your second number\n");
scanf(" %d", &number2);
printf("your multiplication of number is %d\n", number1 * number2 );
printf("do you want to continue further of multipication  type : Y/N \n");
scanf(" %c", &choice) ;// here we are taking condition for further do while loop
if (choice == "Y" || choice == "y"){
choice = "y";
              }
}while(choice == 'y');

}
