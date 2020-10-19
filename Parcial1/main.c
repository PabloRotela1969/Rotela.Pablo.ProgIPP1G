#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int id;
    char nombre[20];
    int infectados;
    int recuperados;
    int muertos;

}ePais;

void actualizarRecuperados(ePais pais[], int recuperadosDelDia);
void invertirCadena(char cadenaInicial[], char cadenaInvertida[]);
void ordenarCaracteres(char cadena[]);

int main()
{
    char cadenaResultado[20];

    ePais listaPais[2];
    actualizarRecuperados(listaPais,1000);
    invertirCadena("UTN-FRA",cadenaResultado);
    ordenarCaracteres("alfa");
    return 0;
}

void actualizarRecuperados(ePais pais[], int recuperadosDelDia)
{
    int indice = 0;
    pais[indice].recuperados = recuperadosDelDia;
}


void invertirCadena(char cadenaInicial[], char cadenaInvertida[])
{
    int cantidadCaracteres = strlen(cadenaInicial);
    for(int i = cantidadCaracteres; i<0; i -- )
    {
        cadenaInvertida[i] = cadenaInicial[i];
    }
}

void ordenarCaracteres(char cadena[])
{
    char aux;
    int largo = strlen(cadena);
    printf("%s", cadena);
    for(int i = 0; i<largo; i++)
    {
        for(int j = i +1; j<largo;j++)
        {
            if(cadena[i]> cadena[j])
            {
                aux = cadena[i];
                cadena[i] = cadena[j];
                cadena[j] = aux;
            }
        }
    }
    printf("%s", cadena);
}
