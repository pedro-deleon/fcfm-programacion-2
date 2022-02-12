#include <iostream>
#include <string>

using namespace std;

class Casa
{
private:
    int numeroEstantes;
    int numeroVentanas;
    string color;

public:
    void setearNumeroEstantes(int numeroEstantes)
    {
        this->numeroEstantes = numeroEstantes;
    }

    void setearNumeroVentanas(int numeroVentanas)
    {
        this->numeroVentanas = numeroVentanas;
    }

    void setearColor(string color)
    {
        this->color = color;
    }

    int obtenerNumeroEstantes()
    {
        return numeroEstantes;
    }

    int obtenerNumeroVentanas()
    {
        return numeroVentanas;
    }

    string obtenerColor()
    {
        return color;
    }
};

int main()
{

    Casa casa1;
    Casa casa2;

    casa1.setearNumeroEstantes(3);
    casa1.setearNumeroVentanas(4);
    casa1.setearColor("rojo");

    casa2.setearNumeroEstantes(7);
    casa2.setearNumeroVentanas(10);
    casa2.setearColor("azul");

    cout << "La Casa 1 es de color " << casa1.obtenerColor()
         << " y tiene " << casa1.obtenerNumeroEstantes() << " estantes y "
         << casa1.obtenerNumeroVentanas() << " ventanas" << endl;

    cout << "La Casa 2 es de color " << casa2.obtenerColor()
         << " y tiene " << casa2.obtenerNumeroEstantes() << " estantes y "
         << casa2.obtenerNumeroVentanas() << " ventanas" << endl;



    return 0;
}