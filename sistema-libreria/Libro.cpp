#include <string>
#include <iostream>
#include "Libro.h"

using namespace std;

Libro::Libro()
{
    this->nombre = "Tutorial Amazon Kindle";
    this->autor = "Amazon Kindle";
    this->numeroPaginas = 200;
    this->año = 2021;
}

Libro::Libro(string nombre, string autor, int numeroPaginas,
             int año)
{
    this->nombre = nombre;
    this->autor = autor;
    this->numeroPaginas = numeroPaginas;
    this->año = año;
}


void Libro::imprimirInfoLibro()
{
    cout << "Nombre: " << this->nombre << endl;
    cout << "Autor: " << this->autor << endl;
    cout << "Numero de Paginas: " << this->numeroPaginas << endl;
    cout << "Año: " << this->año << endl;
}