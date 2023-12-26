#include<stdio.h>
int main (){

     int r,c,k=11,l;

      for (r = 5; r>=1; r--){
        for (c =r; c >= 1; c--){
            printf(" ");
        }      
        for (int j = r; j <=5; j++){
            printf("%d",j);
        }
        printf("\n");
    }

        printf("\n");

        return 0;
}