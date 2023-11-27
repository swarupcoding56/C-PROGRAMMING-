#include<stdio.h>
#include<conio.h>
int main(){
    char s;
    int w,h,a,b;
    printf("WHAT IS YOUR SEX(M or F): ");
    scanf("%c",&s);
    printf(" ENTER  YOUR WEIGHT(kg):");
    scanf ("%d",& w);
    printf("ENTER YOUR HEIGHT(cm): ");
    scanf("%d",&h);
    printf (" ENTER YOUR AGE(Year):");
    scanf("%d",&a);
    if ( s=='M'){
        b=88.362+(13.397*w)+(4.799*h)-(5.677*a);
        printf( "  SIR YOUR BMR IS %d \n",b);
        if ( b>1600){
            printf("  SIR YOUR BMR IS NOT IN COTROL");
        }
        else {
            printf("YOU ARE NORMAL");
        }
    }
    if( s=='F'){
        b=447.593+(9.247*w)+(3.098*h)+(4.303*a);
        printf(" MAM YOUR BMR IS %d\n",b);
        if ( b>1400)
        printf("  MAM YOUR BMR IS NOT IN CONTROL");
        else 
        printf("   MAM NO TENSION YOUR BMR IS NORMAL");
    }
        return 0;
}