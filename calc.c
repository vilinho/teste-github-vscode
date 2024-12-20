#include <stdio.h>

int main(void){
    int x, y, soma;
    printf ("Insira um numero: \n");
    scanf ("%d", &x);
    printf ("Insira um segundo numero: \n");
    scanf ("%d", &y);
    soma = x + y;
    printf ("A soma eh %d\n", soma);
    return 0;
}