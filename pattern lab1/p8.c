#include<stdio.h>
int main(){
    int k=1;
    
     for (int r=1; r<=5; r++){
        for (int c=1; c<=5; c++){
            if (c<=r){
                printf("%d ",k);
                k++;
            }  
        }
        printf("\n");
     }

    return 0;
}