
#include "Movie.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

EMovie* Movie_new()
{
    EMovie* this;
    this=malloc(sizeof(EMovie));
    return this;
}

void Movie_delete(EMovie* this)
{
    free(this);
}

EMovie* Movie_newConParametros(char* titulo,char* genero,int duracion,char* descripcion,float puntaje,char* linkImagen,int flagOcupado,int idPelicula)
{
    EMovie* this;
    this=Movie_new();

    if(
    !Movie_setTitulo(this,titulo)&&
    !Movie_setGenero(this,genero)&&
    !Movie_setDuracion(this,duracion)&&
    !Movie_setDescripcion(this,descripcion)&&
    !Movie_setPuntaje(this,puntaje)&&
    !Movie_setLinkImagen(this,linkImagen)&&
    !Movie_setFlagOcupado(this,flagOcupado)&&
    !Movie_setIdPelicula(this,idPelicula))
        return this;

    Movie_delete(this);
    return NULL;
}

int Movie_setTitulo(EMovie* this,char* titulo)
{
    int retorno=-1;
    if(this!=NULL && titulo!=NULL)
    {
        strcpy(this->titulo,titulo);
        retorno=0;
    }
    return retorno;
}

int Movie_getTitulo(EMovie* this,char* titulo)
{
    int retorno=-1;
    if(this!=NULL && titulo!=NULL)
    {
        strcpy(titulo,this->titulo);
        retorno=0;
    }
    return retorno;
}

int Movie_setGenero(EMovie* this,char* genero)
{
    int retorno=-1;
    if(this!=NULL && genero!=NULL)
    {
        strcpy(this->genero,genero);
        retorno=0;
    }
    return retorno;
}

int Movie_getGenero(EMovie* this,char* genero)
{
    int retorno=-1;
    if(this!=NULL && genero!=NULL)
    {
        strcpy(genero,this->genero);
        retorno=0;
    }
    return retorno;
}

int Movie_setDuracion(EMovie* this,int duracion)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->duracion=duracion;
        retorno=0;
    }
    return retorno;
}

int Movie_getDuracion(EMovie* this,int* duracion)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *duracion=this->duracion;
        retorno=0;
    }
    return retorno;
}

int Movie_setDescripcion(EMovie* this,char* descripcion)
{
    int retorno=-1;
    if(this!=NULL && descripcion!=NULL)
    {
        strcpy(this->descripcion,descripcion);
        retorno=0;
    }
    return retorno;
}

int Movie_getDescripcion(EMovie* this,char* descripcion)
{
    int retorno=-1;
    if(this!=NULL && descripcion!=NULL)
    {
        strcpy(descripcion,this->descripcion);
        retorno=0;
    }
    return retorno;
}

int Movie_setPuntaje(EMovie* this,float puntaje)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->puntaje=puntaje;
        retorno=0;
    }
    return retorno;
}

int Movie_getPuntaje(EMovie* this,float* puntaje)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *puntaje=this->puntaje;
        retorno=0;
    }
    return retorno;
}

int Movie_setLinkImagen(EMovie* this,char* linkImagen)
{
    int retorno=-1;
    if(this!=NULL && linkImagen!=NULL)
    {
        strcpy(this->linkImagen,linkImagen);
        retorno=0;
    }
    return retorno;
}

int Movie_getLinkImagen(EMovie* this,char* linkImagen)
{
    int retorno=-1;
    if(this!=NULL && linkImagen!=NULL)
    {
        strcpy(linkImagen,this->linkImagen);
        retorno=0;
    }
    return retorno;
}

int Movie_setFlagOcupado(EMovie* this,int flagOcupado)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->flagOcupado=flagOcupado;
        retorno=0;
    }
    return retorno;
}

int Movie_getFlagOcupado(EMovie* this,int* flagOcupado)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *flagOcupado=this->flagOcupado;
        retorno=0;
    }
    return retorno;
}

int Movie_setIdPelicula(EMovie* this,int idPelicula)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->idPelicula=idPelicula;
        retorno=0;
    }
    return retorno;
}

int Movie_getIdPelicula(EMovie* this,int* idPelicula)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *idPelicula=this->idPelicula;
        retorno=0;
    }
    return retorno;
}

