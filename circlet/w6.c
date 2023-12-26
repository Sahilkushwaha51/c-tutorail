#include<stdio.h>
int main (){

     int r,c,k=11,l;
      for (r = 5; r >= 1; r--){  
        for (l= 1; l<= r; l++)
        {
            printf("  ");
        }
        for (c = r; c<=5; c++)
        {
            printf(" %d", c);
        }
         for (c = 5-1; c>=r; c--)
        {
            printf(" %d", c);
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}