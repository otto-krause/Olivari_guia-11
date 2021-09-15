#include <stdio.h>

char* compara (int x, int y)
{
if(x>y)
return "mayor" ;
if (x<y)
return "menor";
else 
return"igual" ;
}
int  main()
{
int a,b ;

printf("Ingrese el primer  numero "); 
scanf("%d", &a );
printf("Ingrese el segundo número " );
scanf("%d", &b);
printf("%d es %s que %d ",a,compara(a,b),b);
}


    