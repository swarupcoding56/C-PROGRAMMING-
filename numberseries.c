#include<stdio.h>
int main(){
    int n;
    printf("ENTER A NUMEBR: ");
    scanf("%d",&n);
    int a=1; int sum=0;
    for (int i=1;i<=n;i++){
        a=i*i;
        sum=sum+a;
    // printf("THE SUM IS %d",sum);
    }
    printf("THE SUM IS %d",sum);
    return 0;
}