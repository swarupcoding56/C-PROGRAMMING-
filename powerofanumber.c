#include <stdio.h>
int main(){
    int m,n;
    printf("  ENTER A NUMBER : ") ;
    scanf("%d",&m);
    printf("  ENTER THE POWER ") ;
    scanf("%d",&n) ;
    int power=m;
    for (int i=1;i<n;i++){
        power = power*m;
    }  
    printf(" ans is %d",power);
        return 0;
}