#include "Libro.h"

using namespace std;

Libro::Libro():ISBN() {
}

Libro::Libro(int ISBN, string titulo, int anioEdicion, string autores) : Publicacion(titulo, anioEdicion, autores) {
    this->descripcion = "Libro";
    this->ISBN = ISBN;
}

int Libro::getISBN() {
    return ISBN;
}

void Libro::mostrarInfo() {
    this->Publicacion::mostrarInfo();
    cout <<"ISBN: " + to_string(this->ISBN) << endl;
}

string Libro::getDescripcion() {
    return "Libro";
}