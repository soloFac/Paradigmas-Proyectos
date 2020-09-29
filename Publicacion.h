#ifndef PUBLICACION_H_
#define PUBLICACION_H_

#include <string>
#include <iostream> 

using namespace std;

class Publicacion {

protected:
    string titulo;
    int anioEdicion;
    string autores;
    string descripcion;

public:
    Publicacion();
    Publicacion(string titulo, int anioEdicion, string autores);

    virtual void mostrarInfo();
    string getTitulo();
    int getAnioEdicion();
    string getAutores();
    virtual string getDescripcion() = 0;
};

#endif 
