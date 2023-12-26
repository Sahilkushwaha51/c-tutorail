#include<stdio.h>
int main (){

     int r,c,k=11,l;

     for (r = 5; r >=1; r--){
        for (c =5; c >= r; c--){
            printf(" ");
        }      
        for ( int j = r; j>=1; j--){
            if (j%2==0){
                printf("0");
            } else {
                printf("1");
            }
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}