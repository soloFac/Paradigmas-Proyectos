// TP4-ProyectoNuevo.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Biblioteca.h"
#include "Revista.h"
#include "Libro.h"
#include "Tesis.h"

#include <iostream>

int main()
{
    Biblioteca* bib1 = new Biblioteca("Facultad de Ciencias Exactas y Tecnologia", "Manuel");

    Revista* rev1 = new Revista(1, "formato1", "Capa Blanca", 1902, "Jose Raul Capa Blanca");
    Tesis* tes1 = new Tesis("Graciela", "Ingenieria en Computación", "Conexiones inalambricas", 2021, "Guido D'Arpino");
    Libro* lib1 = new Libro(2, "Cronica de una Muerte Anunciada", 1981, "Gabriel Garcia Marquez");
    Libro* lib2 = new Libro(3, "El Atroz Encanto de Ser Argentino", 2001, "Marcos Aguinis");


    bib1->agregarPublicacion(rev1);
    bib1->agregarPublicacion(tes1);
    bib1->agregarPublicacion(lib1);
    bib1->agregarPublicacion(lib2);

    bib1->listarPublicaciones();
    bib1->mostrarInfoBiblioteca();
    bib1->listarPorTipo("Revista");
    bib1->listarPorTipo("Libro");
    bib1->listarPorTipo("Tesis");

    bib1->pertenecePublicacion("\nCronica de una Muerte Anunciada", "Libro");
    bib1->pertenecePublicacion("Cronica de una Muerte Anunciada", "Revista");
    bib1->pertenecePublicacion("Conexiones inalambricas", "Tesis");
    bib1->pertenecePublicacion("Capa Blanca", "Revista");

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
