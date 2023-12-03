#include <stdio.h>
int main(){
    int m;int i;
    printf("  ENTER A NUMBER: ");
    scanf("%d",&m);
    int number=1;
    for (i=1;i<=(m-1);i++){
    number=m/i;
    if(number==i) printf("THE SQUARE ROOT OF %d is:%d",m,i);
    }
    return 0;
}