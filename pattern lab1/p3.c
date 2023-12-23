#include<stdio.h>
int main(){
    int k=1;

     for (int r=5; r>=1; r--){
        for (int c=5; c>=1; c--){
            if (c>=r){
                printf("%d ",r);
            }  
        }
        printf("\n");
    }

      printf("\n");

      return 0;
}