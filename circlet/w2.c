#include<stdio.h>
int main (){

     int r,c,k=11,l;

      for (r=1; r<=5; r++){
         for (c=1; c<=5; c++){
            if (c<=r){
               printf("%d ",k);
               k++;
            }   
        }     
        printf("\n");
    }

        printf("\n");

        return 0;
}