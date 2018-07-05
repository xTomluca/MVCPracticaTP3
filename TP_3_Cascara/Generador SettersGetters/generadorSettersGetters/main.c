#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "generador.h"
#include "utn.h"
#include "ArrayList.h"

int main()
{
    ArrayList* listaCampos;
    listaCampos=al_newArrayList();

    char estructura[25];
    char nombreArchivo[50];

    if(parserHeader(listaCampos,estructura,nombreArchivo))
        printf("No se encontro el archivo");

    else
        actualizarArchivos(estructura,nombreArchivo,listaCampos,nombreArchivo);

    return 0;
}


