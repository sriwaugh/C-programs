#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    printf("Enter th string\n");
    char str[100];
    scanf("%s",str);
    int n=sizeof(str);
    char str2[100]="";
    for(int i=0;i<n;i++)
    {
        if(tolower(str[i])=='a'||tolower(str[i])=='e'||tolower(str[i])=='i'||tolower(str[i])=='o'||tolower(str[i])=='u')
        {
            char temp[]="A";
            temp[0]=str[i];
            for(int j=0;j<=i;j++)
            {
                strcat(str2,temp);
            }
        }
        else{
            char temp1[]="A";
            temp1[0]=str[i];
            strcat(str2,temp1);
        }
    }
    printf("%s",str2);
}
