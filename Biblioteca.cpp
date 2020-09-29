#include "Biblioteca.h"

#include <iostream>
#include <string>
using namespace std;


Biblioteca::Biblioteca() {
}

Biblioteca::Biblioteca(string unidadAcademica, string director) {
    this->unidadAcademica = unidadAcademica;
    this->director = director;
}

void Biblioteca::agregarPublicacion(Publicacion* p) {
    this->publicaciones.insert(publicaciones.end(), p);
}

void Biblioteca::listarPublicaciones() {
    vector<Publicacion*>::iterator it;
    cout << "\nPublicaciones: " << endl;
    for (it = publicaciones.begin(); it != publicaciones.end(); ++it) {
        (*it)->mostrarInfo();
    }

}
void Biblioteca::mostrarInfoBiblioteca() {
    cout << "\nInformacion de la Biblioteca: " << endl;
    cout << "Unidad académica: " << unidadAcademica << endl;
    cout << "Director: " << director << endl;
    listarPublicaciones();
}
bool Biblioteca::pertenecePublicacion(string titulo, string tipo) {
    vector<Publicacion*>::iterator it;
    for (it = publicaciones.begin(); it != publicaciones.end(); ++it) {
        if ((*it)->getDescripcion() == tipo && (*it)->getTitulo() == titulo) {
            cout << titulo + " si pertenece a " + tipo << endl;
            return true;
        }
    }
    cout << titulo + " no pertenece a " + tipo << endl;
    return false;
}
void Biblioteca::listarPorTipo(string tipo) {
    vector<Publicacion*>::iterator it;
    for (it = publicaciones.begin(); it != publicaciones.end(); ++it) {
        if ((*it)->getDescripcion() == tipo) {
            (*it)->mostrarInfo();
        }
    }
}

Biblioteca::~Biblioteca() {
    vector<Publicacion*>::iterator it;
    for (it = publicaciones.begin(); it != publicaciones.end(); ++it) {
        delete (*it);
    }

    publicaciones.clear();
}
