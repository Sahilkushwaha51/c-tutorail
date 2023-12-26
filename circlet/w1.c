#include<stdio.h>
int main (){

     int r,c,k=11,l;

    
    for (r=41; r<=45; r++){
         for (c=41; c<=45; c++){
            if (c<=r){
               printf("%d ",c);
            }   
        }     
        printf("\n");
    }
    
        printf("\n");

        return 0;
}