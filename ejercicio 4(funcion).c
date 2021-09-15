#include <stdio.h>
#include <stdlib.h>
float  presion (float f,float s)
{
return f /s;
}
int main(){
float f,s;
printf("Ingresar la fuerza (Newtons):\n"); 
scanf("%f", &f);
printf("\nIngresar la superficie(M°2):\n");
scanf("%f",&s);
printf("\nLa presión sobre la superficie es:\n %fPa",  presion(f,s) );
}



    