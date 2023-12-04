#include<stdio.h>
int main (){
    int n ; 
     printf ( " ente ra numeber :");
     scanf(" %d ",n);
     int a = 100 ; 
     for ( int i =1;i<=n;i=i+1){ 
      printf ( "%d ",a );
        a =(a-3);
     }
       return 0;
}