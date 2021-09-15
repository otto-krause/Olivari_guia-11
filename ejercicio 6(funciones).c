#include <stdio.h>
#include <stdlib.h>
float octava(float a)
{
return a/8;
}


int  main(){
float  n;
printf("Ingrese numero:"); 
scanf("%f", &n );
printf("La octava parte es:\n%f " , octava(n));
}



    