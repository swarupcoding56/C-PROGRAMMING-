#include<stdio.h>
int min(int a,int b){
    if(a>b){
        return b;
    }
    else {
        return a;
    }
    return 0;
}
int main(){
    int n;int b;
    printf("enter the first number :");
    scanf("%d",&n);
    printf("enter the second number :");
    scanf("%d",&b);
    int c;
    for(int i=1;i=min(n,b);i++){
           if(n%i==0&&b%i==0){
           c=i;
           break;
           }
    }
    printf("the lcm of the two numbers is %d",c);
    return 0;
}