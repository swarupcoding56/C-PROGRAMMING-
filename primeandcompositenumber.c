#include<stdio.h>
int main (){
    int  n;
    printf( "  enter a  number :");
    scanf(" %d",&n );
    int a=0;
    for(int i=2; i<=n-1;i++){
        if (n%i==0){
    a=1;
        }
    }
    if(n==1)printf( "1 is not either prime or nor composite");
    if(a==1)printf( "the number is composite");
    else printf("the number is prime");
    return 0 ;
}