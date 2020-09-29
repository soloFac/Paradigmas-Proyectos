#include "Tesis.h"
#include <string>

using namespace std;

Tesis::Tesis() {}

Tesis::Tesis(string nombreDirector, string carrera, string titulo, int anioEdicion, string autores) : Publicacion(titulo, anioEdicion, autores) {
    this->nombreDirector = nombreDirector;
    this->carrera = carrera;
    this->descripcion = "Tesis";
}

string Tesis::getNombreDirector() { return nombreDirector; }
string Tesis::getCarrera() { return carrera; }

void Tesis::mostrarInfo() {
    this->Publicacion::mostrarInfo();
    cout << "Nombre del director: "+nombreDirector+"\nCarrera: "+carrera<< endl;
    
}
string Tesis::getDescripcion() {
    return "Tesis";
}