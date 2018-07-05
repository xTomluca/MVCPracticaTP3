
#include "producto.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

EProducto* producto_new()
{
    EProducto* this;
    this=malloc(sizeof(EProducto));
    return this;
}

void producto_delete(EProducto* this)
{
    free(this);
}

EProducto* producto_newConParametros(int cantidad,char* nombre,char* descripcion,float precio,char categoria,int id)
{
    EProducto* this;
    this=producto_new();

    if(
    !producto_setCantidad(this,cantidad)&&
    !producto_setNombre(this,nombre)&&
    !producto_setDescripcion(this,descripcion)&&
    !producto_setPrecio(this,precio)&&
    !producto_setCategoria(this,categoria)&&
    !producto_setId(this,id))
        return this;

    producto_delete(this);
    return NULL;
}

int producto_setCantidad(EProducto* this,int cantidad)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->cantidad=cantidad;
        retorno=0;
    }
    return retorno;
}

int producto_getCantidad(EProducto* this,int* cantidad)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *cantidad=this->cantidad;
        retorno=0;
    }
    return retorno;
}

int producto_setNombre(EProducto* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(this->nombre,nombre);
        retorno=0;
    }
    return retorno;
}

int producto_getNombre(EProducto* this,char* nombre)
{
    int retorno=-1;
    if(this!=NULL && nombre!=NULL)
    {
        strcpy(nombre,this->nombre);
        retorno=0;
    }
    return retorno;
}

int producto_setDescripcion(EProducto* this,char* descripcion)
{
    int retorno=-1;
    if(this!=NULL && descripcion!=NULL)
    {
        strcpy(this->descripcion,descripcion);
        retorno=0;
    }
    return retorno;
}

int producto_getDescripcion(EProducto* this,char* descripcion)
{
    int retorno=-1;
    if(this!=NULL && descripcion!=NULL)
    {
        strcpy(descripcion,this->descripcion);
        retorno=0;
    }
    return retorno;
}

int producto_setPrecio(EProducto* this,float precio)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->precio=precio;
        retorno=0;
    }
    return retorno;
}

int producto_getPrecio(EProducto* this,float* precio)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *precio=this->precio;
        retorno=0;
    }
    return retorno;
}

int producto_setCategoria(EProducto* this,char categoria)
{
    int retorno=-1;
    if(this!=NULL)
    {
        this->categoria=categoria;
        retorno=0;
    }
    return retorno;
}

int producto_getCategoria(EProducto* this,char* categoria)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *categoria=this->categoria;
        retorno=0;
    }
    return retorno;
}

int producto_setId(EProducto* this,int id)
{
    int retorno=-1;
    static int proximoId=-1;

    if(this!=NULL && id==-1)
    {
        proximoId++;
        this->id=proximoId;
        retorno=0;
    }
    else if(id>proximoId)
    {
        proximoId=id;
        this->id=proximoId;
        retorno=0;
    }
    return retorno;
}

int producto_getId(EProducto* this,int* id)
{
    int retorno=-1;
    if(this!=NULL)
    {
        *id=this->id;
        retorno=0;
    }
    return retorno;
}

