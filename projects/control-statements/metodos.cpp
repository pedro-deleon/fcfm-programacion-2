#include <iostream>
using namespace std;

string nombreCompleto(string nombre, string apellidos);

int main()
{
    string nombre;
    string apellidos;

    for (int i = 0; i < 2; i++)
    {
        cout << "¿Cual es su nombre?" << endl;
        getline(cin, nombre);

        cout << "Cual es su apellidos" << endl;
        getline(cin, apellidos);

        string nombreC = nombreCompleto(nombre, apellidos);
        cout << nombreC << endl;

        /* code */
    }

    return 0;
}

string nombreCompleto(string nombre, string apellidos)
{
    //string nombreCompleto = nombre + " " + apellidos;
    return nombre + " " + apellidos;
}