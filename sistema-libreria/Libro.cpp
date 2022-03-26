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
    guardarNumeroPaginas(numeroPaginas);
    this->año = año;
}

void Libro::guardarNumeroPaginas(int numeroPaginas)
{
    if (numeroPaginas <= 0)
    {
        throw invalid_argument("El numero de paginas no puede ser menor que 0");
    }

    this->numeroPaginas = numeroPaginas;
}

void Libro::guardarTitulo(string titulo)
{
    if (titulo.size() <= 3)
    {
        throw invalid_argument("El titulo debe de tener mas de 3 caracteres");
    }

    this->titulo = titulo;
}

void Libro::imprimirInfoLibro()
{
    cout << "Titulo del libro: " << this->titulo << endl;
    cout << "Autor: " << this->autor << endl;
    cout << "Numero de paginas" << this->numeroPaginas << endl;
    cout << "Año: " << this->año << endl;
}
