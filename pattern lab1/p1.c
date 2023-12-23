#include<stdio.h>
int main (){
      int k=1;
      
    for (int r=1; r<=5; r++){
        for (int c=5; c>=1; c--){ 
            if (c<=r){
              printf("%d ",c);
            }
        } 
        printf("\n");
    }

      printf("\n");

      return 0;
}
