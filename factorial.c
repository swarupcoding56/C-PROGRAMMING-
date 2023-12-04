#include<stdio.h>
int main(){
    int n ;
    printf(" enter a number:");
    scanf("%d",&n);
    long int f=1;
    int i=1;
    while (i<=n) { 
        f =f*i;
        i=(i+1);
    }
    printf (" the factorial of the number is %d ",f);
        return 0;
}