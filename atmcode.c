#include <stdio.h>
int main()
{
    int n,ld,sd,dd,ff,gg,cc ;
    printf("ENTER YOUR MONEY : ");
    scanf("%d", &n);
    ld=(n/1000);
     sd =(n%1000);
     dd=(sd/100);
     cc=(sd%100);
     ff=(cc/10);
     gg=(cc%10);
    printf("1000 RUPPIES GENARATED:%d\n",ld);
    printf("100 RUPPIES GENARATED:%d\n",dd);
    printf("10 RUPPIES GENARATED:%d\n",ff);
    printf("1 RUPPIES GENARATED :%d\n",gg);
    return 0;
}
