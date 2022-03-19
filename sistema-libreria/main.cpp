#include <iostream>
#include <string>
#include "Libro.h"

vector<Libro> libros;
bool agregarLibro(Libro libro);
bool eliminarLibro(string titulo);
void imprimirLibros();

using namespace std;

int main()
{
    Libro libro1;
    Libro libro2("El Principito", "Antoine deSaintExcupery", 180, 1850);
    Libro libro3("Quimica", "Profe Antolin", 880, 2010);

    agregarLibro(libro1);
    agregarLibro(libro2);
    agregarLibro(libro3);

    imprimirLibros();
    cout << "##################################" << endl;
    cout << "##################################" << endl;
    cout << "##################################" << endl;
    cout << "Antes de llamar función eliminarLibro" << endl;
    cout << "##################################" << endl;
    cout << "##################################" << endl;
    cout << "##################################" << endl;

    eliminarLibro("El Principito");
    imprimirLibros();

    return 0;
}

/**
 * Agregar un libro a vector global libros
 *
 * @return true libro agregado correctamente
 * @return false error al agregar libro
 */
bool agregarLibro(Libro libro)
{
    libros.push_back(libro);
    return true;
}

/**
 * Elimina libro del vector global de libros
 *
 * @return true libro eliminado con éxito
 * @return false el libro no pudo ser eliminados
 */
bool eliminarLibro(string titulo)
{
    // Buscar la posición del nombre del libro.
    bool seEliminoLibro = false;

    for (int i = 0; i < libros.size(); i++)
    {
        if (titulo == libros[i].titulo)
        {
            libros.erase(libros.begin() + i);
            seEliminoLibro = true;
            break;
        }
    }
    return seEliminoLibro;
}

void imprimirLibros()
{
    for (int i = 0; i < libros.size(); i++)
    {
        cout << "Libro # " << i + 1 << endl;
        libros[i].imprimirInfoLibro();
        cout << "====================================" << endl;
    }
}