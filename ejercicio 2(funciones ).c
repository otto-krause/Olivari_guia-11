#include <stdio.h>
int area(int altura, int base)
{ return altura * base;}
int perimetro(int altura, int base)
{ return altura*2+base*2;
}int main()
{
 int a; 
int b;
printf("ingrese la base del  rectangulo:\n ");
scanf("%d",&a);
printf("\ningrese la altura del rectangulo:\n ");
scanf("%d",&b);
printf("\nel area es :\n%d\n",area(a,b));
 printf("\nel perimetro es:\n%d", perimetro(a,b));
}


    