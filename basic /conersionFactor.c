#include <stdio.h>

main(){
//here we talk about conversion factor that we use in controlstring to represent our data
// %d ----> for integar
// %f------> floating numbers
// %c ------> character data types ---> charcter can be typed only in single quotes
// %s -----> string data type // string only double quotes (! importnat )

printf("%s, %d , %f, %c\n", "rajesh", 2000, 99.9, 'A'); // conersion factor can be used in c lang.
//whenever we print floating number by conversion factor c lang's printf function output total 6 decimal point
//example
printf("%.f, %.2f, %.3f, %.4f", 4.768, 4.768, 4.768, 4.768);
return 0;
}
