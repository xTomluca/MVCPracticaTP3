#ifndef PRODUCTO_H_INCLUDED
#define PRODUCTO_H_INCLUDED
typedef struct
{
    int cantidad;
    char nombre[40];
    char descripcion[128];
    float precio;
    char categoria;
    int id;
}EProducto;


#endif // PRODUCTO_H_INCLUDED


EProducto* producto_new();
void producto_delete();
EProducto* producto_newConParametros(int cantidad,char* nombre,char* descripcion,float precio,char categoria,int id);

int producto_setCantidad(EProducto* this,int cantidad);
int producto_getCantidad(EProducto* this,int* cantidad);

int producto_setNombre(EProducto* this,char* nombre);
int producto_getNombre(EProducto* this,char* nombre);

int producto_setDescripcion(EProducto* this,char* descripcion);
int producto_getDescripcion(EProducto* this,char* descripcion);

int producto_setPrecio(EProducto* this,float precio);
int producto_getPrecio(EProducto* this,float* precio);

int producto_setCategoria(EProducto* this,char categoria);
int producto_getCategoria(EProducto* this,char* categoria);

int producto_setId(EProducto* this,int id);
int producto_getId(EProducto* this,int* id);

#endif // PRODUCTO_H_INCLUDED
