#include<stdio.h>
int main (){

     int r,c,k=11,l;

      for (r = 1; r<= 5; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf(" %d", c);
        }
        for (l = 4; l>= r; l--)
        {
            printf("  ");
        }
        for (l = r; l <= 4; l++)
        {
            printf("  ");
        }

        for (c = r; c>=1; c--)
        {
            printf(" %d", c);
        }
        printf("\n");
    }

        printf("\n");

        return 0;
}