#include <string>
#include <iostream>
#include "Libro.h"

using namespace std;



// Implementacion de los Constructores
Libro::Libro()
{
    this->titulo = "Tutorial Amazon Kindle";
    this->autor = "Amazon Kindle";
    this->numeroPaginas = 55;
    this->año = 2020;
}

Libro::Libro(string titulo, string autor, int numeroPaginas,
    int año)
{
    this->titulo = titulo;
    this->autor = autor;
    this->numeroPaginas= numeroPaginas;
    this->año = año;
}


void Libro::imprimirInfoLibro()
{
    cout << "Titulo del libro: " << this->titulo << endl;
    cout << "Autor: " << this->autor << endl;
    cout << "Numero de paginas" << this->numeroPaginas <<endl;
    cout << "Anio: " << this->año << endl;
}












