#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main ()
{
	setlocale (LC_ALL, "Portuguese");
	float x, y;
	printf ("Considerando uma pirâmide de base quadrada, digite o o tamanho do lado da base: \n");
    scanf ("%f", &x);
    printf ("Agora digite a altura: \n");
    scanf ("%f", &y);
    float Volume, altura = y , lado = x;
    Volume = (x*x)*y/3;
    printf("Volume = %.2f \n", Volume);
    system ("pause");
    return 0;
    

}