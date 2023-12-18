#include<stdio.h>
int main(){
    float unit,surcharge,bill;
    printf("enter is bill :");
    scanf("%f",&unit);

    if (unit<=50){
        bill = unit*0.50;
    }
    else if(unit>=51 && unit<=150){
        bill = 25 + (unit-50)*0.75;
    }
     else if(unit>=151 && unit<=250){
        bill = 25 + 75 +(unit-50)*1.2;
    }
     else{
        bill = 25 + 75 + 120 + (unit-50)*1.5;
    }

    printf("\n bill : %.2f",bill);

    surcharge = bill*20/100;
    printf("\n surcharge : %.2f",surcharge);
    
    bill = surcharge + bill;
    printf("\n total bill amount : %.2f",bill);

    return 0;
}