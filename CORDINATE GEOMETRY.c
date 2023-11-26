#include<stdio.h>
int main (){
int  x,y;
printf( " enter the cordinates:");
scanf("%d%d",&x,&y);
if ( x ==0 && y==0 ){
printf( " the cordinate is on origin ");
}
else if ( x ==0){
    printf ( "the cordinate is on x axis  ");
}
else if ( y==0){ 
    printf ( "the coridnate is on y axis");
}
else {
    printf (" the  cordinate is not in the x axis also not in y axis and  not on  the origin");
}
return 0; 
}
