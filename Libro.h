#pragma once
#include "Publicacion.h"

#ifndef LIBRO_H_
#define LIBRO_H_

#include <string>

using namespace std;

class Libro :
    public Publicacion
{
private:
    int ISBN;

public:
    Libro();
    Libro(int ISBN, string titulo, int anioEdicion, string autores);
    int getISBN();
    void mostrarInfo();
    string getDescripcion();
};

#endif