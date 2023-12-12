#include<stdio.h>
int main(){
    int salary, hra, da, ta, grosssalary;
    printf("a and b :");
    scanf("%d",&salary);
    hra = salary*10/100;
    da = salary*5/100;
    ta = salary*8/100;
    grosssalary = salary+hra+da+ta;

    printf("\n enter salary :%d",salary);
    printf("\n enter hra :%d",hra);
    printf("\n enter da :%d",da);
    printf("\n enter ta :%d",ta);
    printf("\n enter grosssalary :%d",grosssalary);
    return 0;
}