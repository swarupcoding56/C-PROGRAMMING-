#include <stdio.h> 
int min(int a,int b){
    int m;
        if(a<b) m=a;
        else m=b;
        return m;
}
    int main (){
    int n;
    printf(" enter the number ");
    scanf("%d",&n);
    for( int i=1 ;i<=(2*n-1);i++){
        for (int j=1;j<=(2*n-1);j++){
        int a=i;
        if (a>n) a=(2*n - i);  
        int b=j;
        if (b>n) b=(2*n - j);
        int minimum=min(a,b);
        printf("%d",minimum);
        }
        printf("\n");
}
      return 0;
}