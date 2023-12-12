#include<stdio.h>
int main(){
    float c,f;
    printf("enter celsium");
    scanf("%f",&c);

    f=c*1.8+32;
    printf("fahrenheit value :%.2f",f);

    return 0;
}