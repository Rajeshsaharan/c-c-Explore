#include <stdio.h>

int main(){
    //sorting array 
    int myarray[] = {1,4,5,3,2};
    //size of an array
    int length_of_myarray = sizeof(myarray)/sizeof(myarray[0]);
    printf("%d\n", length_of_myarray);
    for(int i =0; i < length_of_myarray; i++ ){
        printf("first value : %d\n", myarray[i]);
        for(int j = i+1; j < length_of_myarray ; j++){
            printf("second Value :%d\n", myarray[j]);
            if(myarray[i] > myarray[j]){
                int temp = myarray[i];
                myarray[i] = myarray[j];
                myarray[j] = temp;
            }
        }

    }
    for (int i=0; i< length_of_myarray; i++){
        printf("items : %d\n", myarray[i]);
    }
return 0;

}