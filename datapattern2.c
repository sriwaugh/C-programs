#include<stdio.h>
int main(){
     char *string;
     char *function(int);
     string=function(0);
     printf("%s",string);
     string=function(1);
     printf("%s",string);
}
char *function(int i){
char *p="data";
char string[]="patterns";
return (i?string:p);
}
