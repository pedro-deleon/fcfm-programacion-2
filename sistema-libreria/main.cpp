#include <iostream>
#include <string>
#include "Libro.h"
#include <vector>

// arreglo global del main de tipo vector.
vector<Libro> libros;

void agregarLibro(Libro libro);
void eliminarLibro(string titulo);
void imprimirLibrosEnConsola();

using namespace std;

int main()
{
    // Inicialización de Objeto tipo Libro

    try
    {
        Libro libro("El Principito", "Antoine deSaintExcupery", -2, 1850);
        cout << "Informacion guardada correctamente!" << endl;
    }
    catch (const invalid_argument e)
    {
        cout << "Exception: " << e.what() << endl;
        cout << "Revisa que la informacion esta correcta" << endl;
    }

    Libro libro;
    while (true)
    {
        try
        {

            string autor;
            string titulo;
            int año;
            int numeroPaginas;

            cout << "Ingrese el titulo del libro" << endl;
            getline(cin, titulo);
            libro.guardarTitulo(titulo);

            cout << "Cuantas paginas tiene el libro" << endl;
            cin >> numeroPaginas;
            cin.ignore(1, '\n');
            libro.guardarNumeroPaginas(numeroPaginas);

            break;
        }
        catch (const invalid_argument e)
        {
            cout << "Exception: " << e.what() << endl;
            cout << "Ingrese nuevamente la informacion" << endl;
            cout << "============================================" << endl;
        }
    }

    libro.imprimirInfoLibro();

    return 0;
}

void agregarLibro(Libro libro)
{
    libros.push_back(libro);
}

void eliminarLibro(string titulo)
{
    // Iterando en nuestro vector de libros
    for (int i = 0; i < libros.size(); i++)
    {
        // Comprobando en ese vector que tenga nombre del titulo igual al
        // del parámetro
        if (titulo == libros[i].titulo)
        {
            libros.erase(libros.begin() + i);
            break;
        }
    }
}

void imprimirLibrosEnConsola()
{
    // Imprimir en consola todos los libros del vector
    for (int i = 0; i < libros.size(); i++)
    {
        libros[i].imprimirInfoLibro();
        cout << "_________________________________" << endl;
    }
}
