
#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t,a,si,ci;
    printf("Enter principle=");
    scanf("%f",&p);
    printf("Enter rate=");
    scanf("%f",&r);
    printf("Enter time=");
    scanf("%f",&t);
    si=(p*r*t)/100;
    printf("Simple interest=%f",si);
    a=p*(pow((1+r/100),t));
    ci=a-p;
    printf("\nCompound Interest=%f",ci);
    return 0;

}

