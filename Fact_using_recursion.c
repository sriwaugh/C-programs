#include<stdio.h>
int fact(int i);
int main()
{
    int i;
    printf("Enter positive integer:");
    scanf("%d",&i);
    printf("The factorial of %d is %d",i,sum(i));
    return 0;
}
int sum(int i)
{
    if(i==0)
    {
        return 0;
    }

    else
    {
        return i*sum(i-1);
    }
}
