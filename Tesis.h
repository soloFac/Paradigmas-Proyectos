#pragma once
#include "Publicacion.h"
#ifndef TESIS_H_
#define TESIS_H_

#include <string>
#include <iostream>

using namespace std;
class Tesis :
    public Publicacion
{
private:
    string nombreDirector;
    string carrera;

public:
    Tesis();
    Tesis(string nombreDirector, string carrera, string titulo, int anioEdicion, string autores);
    string getNombreDirector();
    string getCarrera();
    void mostrarInfo();
    string getDescripcion();
};

#endif
