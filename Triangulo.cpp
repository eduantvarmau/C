#include <stdio.h>
main ()
{
	int a,b,c;
	printf("Bienvenido");
	printf("\nEl valor que a continuacion sea introducido sera tomado como la base del triangulo");
	printf("\nIntrodusca el valor de  a");
	scanf ("%d",&a);
	printf("El valor que a continuacion sea introducido sera tomado como la altura del triangulo");
	printf ("\nIntrodusca el valor de b");
	scanf ("%d",&b);
	
	c=a*b/2;
	printf("El area del triangulo es :%d",c);
	return 0;
	
}


