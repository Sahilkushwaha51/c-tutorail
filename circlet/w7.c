#include<stdio.h>
int main (){

     int r,c,k=11,l;

      for (r = 1; r <= 5; r++){
        if (r==1 || r==3)
        {
           printf("* * * * *");
        } else
        {
           printf("*       *");
        }  
        printf("\n");
    }

    return 0;
}