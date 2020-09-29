#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

#include <string>
#include <vector>
#include "Publicacion.h"

using namespace std;

class Biblioteca
{
private:
    string unidadAcademica;
    string director;
    vector<Publicacion*> publicaciones;

public:
    Biblioteca();
    Biblioteca(string unidadAcademica, string director);
    void listarPublicaciones();
    void mostrarInfoBiblioteca();
    bool pertenecePublicacion(string titulo, string tipo);
    void listarPorTipo(string tipo);
    void agregarPublicacion(Publicacion* p);
    ~Biblioteca();
};

#endif 