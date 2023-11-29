#include<stdio.h>
int main(){ 
    float x;
    printf(" enter a radius :");
    scanf ("%f",&x);
    float v= 4*3.14*x*x*x/3;
    printf(" THE VOLUME OF THE SPHERE =%f",v);
    return 0;
}