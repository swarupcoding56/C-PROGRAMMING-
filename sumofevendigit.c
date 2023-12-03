#include <stdio.h> 
int main (){
    int n ; 
    printf("enter a number : ");
    scanf(" %ld" ,&n );
    int sum =0;
    int ld=0;
    while ( n!=0) { 
        ld=n%10;
        n=n/10;
        if ( ld%2==0){
        sum =sum + ld;
    }
    }
    printf(" the summation  even of the given numeber digits is %d ",sum);
     return 0; 
}