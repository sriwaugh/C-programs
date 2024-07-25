#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,i,count,sum=0;
    char num[100];
    printf("Enter Binary Number:");
    scanf("%d",&a);
    sprintf(num,"%d",a);
    count=strlen(num);
    for(i=0;i<count;i++)
    {
        b=a%10;
        a=a/10;
        sum+=pow(2,i)*b;
    }
    printf("The Decimal Number is :%d",sum);
}
