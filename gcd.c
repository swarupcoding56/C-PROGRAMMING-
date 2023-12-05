#include<stdio.h>
int min(int a,int b){
    if (a<b)return a;
    else return b;
}
int main(){
    int a,b;
    printf("enter first numeber: ");
    scanf("%d",&a);
    printf("enter first numeber: ");
    scanf("%d",&b);
    for ( int i =min(a,b);i>=1;i--){
    if (a%i== 0 && b%i==0){ 
    printf("the gcd of the %d and %d is %d ",a,b,i);
    break;
}
    }
    return 0;
}