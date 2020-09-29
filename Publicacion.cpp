#include "Publicacion.h"

#include <string>
#include <iostream>
using namespace std;

Publicacion::Publicacion(): titulo(), anioEdicion(), autores() {
}

Publicacion::Publicacion(string titulo, int anioEdicion, string autores) {
    this->titulo = titulo;
    this->anioEdicion = anioEdicion;
    this->autores = autores;
}

void Publicacion::mostrarInfo() {
    cout << "\nTitulo: " << titulo << endl;
    cout << "Año de Edición: " << anioEdicion << endl;
    cout << "Autores: " << autores << endl;
    cout << "Descripcion: " << descripcion << endl;
}
string Publicacion::getTitulo() {
    return titulo;
}
int Publicacion::getAnioEdicion() {
    return anioEdicion;
}
string Publicacion::getAutores() {
    return autores;
}


