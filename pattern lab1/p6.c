#include<stdio.h>
int main(){
    int k=1;

     for (int r=5; r>=1; r--){
        for (int c=1; c<=5; c++){ 
            if (c<=r){
                if (c%2==0){
                      printf("0 ");
                }
                else{
                      printf("1 ");                 
                }
            }
        }
        printf("\n");
    }

     printf("\n");
     
    return 0;
}