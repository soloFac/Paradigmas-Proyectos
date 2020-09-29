#include "Revista.h"

using namespace std;

Revista::Revista(): ISSN(), formato(){
}

Revista::Revista(int ISSN, string formato, string titulo, int anioEdicion, string autores) : Publicacion(titulo, anioEdicion, autores) {
    this->descripcion = "Revista";
    this->ISSN = ISSN;
    this->formato = formato;
}

string Revista::getFormato() {
    return formato;
}
int Revista::getISSN() {
    return ISSN;
}

void Revista::mostrarInfo() {
    this->Publicacion::mostrarInfo();
    cout << "Formato: " + this->formato + "\nISSN: " + to_string(ISSN) << endl;
}

string Revista::getDescripcion() {
    return "Revista";
}