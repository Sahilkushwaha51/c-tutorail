#include<stdio.h>
int main(){
    int k=1;
    
    for (char r='A'; r<='E'; r++){
        for (char c='E'; c>='A'; c--){ 
            if (c<=r){
              printf("%c ",c);
            }
        }
        printf("\n");
    }

     printf("\n");
     
    return 0;
}