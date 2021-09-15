#include <stdio.h>
#include <stdlib.h>

float mujer(float hombre ,float mujer){
return mujer=(mujer*100)/(hombre+mujer);
}
float hombre(float hombre, float mujer){
return hombre=(hombre*100)/(hombre+mujer);
}
int main(){
float a,b;
printf("CUANTOS HOMBRES SE POSTULARON?\n"); 
scanf("%f",&a );
printf("CUANTAS MUJERES SE POSTULARON?\n");
scanf("%f",&b);
printf("\nEl porciento de las mujeres que\nentregaron su curricular son el:\n%f porciento",mujer(a,b));
printf("\nEl porciento de los hombres que\nentregaron su curricular son el:\n%f porciento ",hombre(a,b));
}



    