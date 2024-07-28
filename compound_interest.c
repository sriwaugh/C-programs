#include<stdio.h>
int main(){
    float amt,i,year,a,b,c,d;
    scanf("%f",&amt);
    scanf("%f",&i);
    scanf("%f",&year);
    a=(amt*i*year)/100;
    d=amt+a;
    b=(a*2)/100;
    c=a+amt-b;
    printf("%.2f\n",a);
    printf("%.2f\n",d);
    printf("%.2f\n",b);
    printf("%.2f\n",c);
    return 0;
    }
