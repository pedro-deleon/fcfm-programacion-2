#include <iostream>
#include <array>
using namespace std;

int sumaArreglo(array<int, 10> miArreglo);

int main()
{
    array<int, 10> arregloPrincipal{2, 5, 2, 10, 20, 15, 100, 25, 10, 22};
    int suma = sumaArreglo(arregloPrincipal);
    cout << "La suma de los elementos del arreglo es " << suma << endl;

    return 0;
}

int sumaArreglo(array<int, 10> miArreglo)
{
    int suma = 0;
    for (int num : miArreglo)
    {
        suma += num;
    }

    return suma;
}