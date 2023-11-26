#include<stdio.h>
int main(){
    int a;int b;int c=1;
    printf(" enter1st number:");
    scanf("%d",&a);
     printf(" enter 2nd number:");
    scanf("%d",&b);
     c=a;a=b;b=c;
     printf(" after switchinng first number is %d",a);
     printf(" after switchinng second number is %d",b);
     return 0;
}