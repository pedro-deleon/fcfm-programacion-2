#include <iostream>
#include "Libro.h"

using namespace std;



int main()
{
    Libro libro1;


    cout << "Libro1 constructor sin parametros" << endl;
    libro1.imprimirInfoLibro();

    cout << "================================" << endl;

    cout << "Libro2 contructor con parametros" << endl;
    Libro libro2("El Principito","Antoine Excupery",189,1988);

    libro2.imprimirInfoLibro();


    return 0;
}