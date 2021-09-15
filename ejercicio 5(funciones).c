#include <stdio.h>
#include <stdlib.h>
int rt(int a,int b,int c,int d,int e)
{
return a+b+c+d+e;
}


int main(){
int r1,r2,r3,r4,r5;
int i=0;
printf("Ingresar el valor de las 5 \nresistencias:\n"); 
scanf("%d %d %d %d %d", &r1,&r2,&r3,&r4,&r5);
printf("las resistencias en orden son:\n%d %d %d %d %d" ,r1,r2,r3,r4,r5); 
printf("\nEl valor de la resistencia total es:\n%d",rt(r1,r2,r3,r4,r5));
}



    