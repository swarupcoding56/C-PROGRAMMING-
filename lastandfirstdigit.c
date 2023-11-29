#include<stdio.h>
#include<math.h>
int main(){
    int n;int ld;
    printf("enter a number ");
    scanf("%d",&n);
    ld=n%10;
    int i=0;
    while(n>1){
        n=n/10;
        i++;
    }
    int p= pow(10,i-1);
    n=n%p;
    printf("the last digit of the number is %d \n",ld);
    printf("the first digit of the number is %d",n);
    return 0;
}