#include <stdio.h>
#include <stdlib.h>

float hacerDescuento(int precio, int descuento);
int contarCaracteres(char cadena[], char caracter);

int main()
{
    hacerDescuento(15,25);

    char letras[]={'a','r','c','o','i','r','i','s'};
    contarCaracteres(letras,'i');
    printf("\n la cantidad de i es %d ",contarCaracteres(letras,'i'));
    return 0;
}

float hacerDescuento(int precio, int descuento)
{
    float conDescuento= precio-(float)(precio* descuento)/100;

    printf("El valor con descuento es %.2f ",conDescuento);

    return conDescuento;
}

int contarCaracteres(char cadena[], char caracter)
{
    int contador = 0;
    int i = 0;

    while(cadena[i] != '\0')
    {
        if(cadena[i]==caracter)
        {
            contador++;
        }
            i++;
    }
    return contador;
}



