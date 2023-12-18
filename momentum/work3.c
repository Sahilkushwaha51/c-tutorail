#include<stdio.h>
int main(){
    int p,q,r,s;
    printf("enter is m&n&o&p :");
    scanf("%d %d %d %d",&p,&q,&r,&s);

    if (p>q)
    {
        if (p>r){
            if (p>s)
            {
                printf("p is max");
            }
            else{
                printf("s is max");
            }    
        }
        else{
            if (q>r)
            {
                printf("r is max");
            }
            else{
                printf("s is max");
            }
            
        }
       
        
    }
    

    else{
        if (q>r)
        {
           if (q>s)
           {
            printf("q is max");
           }
           else{
            printf("s is max");
           }
           
        }
        else {
            if (r>s)
            {
                printf("r is max");
            }
            else{
                printf("s is max");
            }
            
        }
        
    }

    return 0;
}