#include<stdio.h>
int main(){
    int a,b;
    printf("\n enter a&b:");
    scanf("%d %d",&a,&b);
    printf("\n before swapping A=%d, B=%d",a,b);
    a=a+b;
    a=b-a;
    a=a-b;
    printf("\n after swapping A=%d, B=%d",a,b);
}