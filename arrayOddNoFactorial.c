#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of the array\n");
    scanf("%d\n",&n);
     int arr[100];
     int fact=1;
     printf("Enter the array elements\n");
     for(int i=0;i<n;i++)
     {
        scanf("%d",&arr[i]);
     }
     for(int i=0;i<n;i++)
     {
         fact=1;
         int x=arr[i];
         if(x%2!=0)
        {

             for(int j=1;j<=x;j++)
             {
                 fact=fact*j;
             }
             arr[i]=fact;
        }
        else{
            arr[i]=x*x*x;
            }
        }
    printf("The result array\n");
    for(int i=0;i<n;i++)
    {
        printf("%d, ",arr[i]);
    }
}
