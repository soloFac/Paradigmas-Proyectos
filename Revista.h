#pragma once
#include "Publicacion.h"

#ifndef REVISTA_H_
#define REVISTA_H_

#include <string>

using namespace std;

class Revista :
    public Publicacion
{
private:
    int ISSN;
    string formato;

public:
    Revista();
    Revista(int ISSN, string formato, string titulo, int anioEdicion, string autores);
    string getFormato();
    int getISSN();
    void mostrarInfo();
    string getDescripcion();
};

#endif