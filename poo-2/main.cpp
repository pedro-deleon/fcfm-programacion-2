#include <iostream>
#include "CuentaBanco.h"

using namespace std;

void procesarDepositar(CuentaBanco cuentaBanco);
double procesarRetirar(CuentaBanco cuentaBanco);

int main()
{
    CuentaBanco cuentaBanco(11, "Ruben Hinojosa", "Banregio", "Mexico");

    cout << "Sus datos son:" << endl;
    cuentaBanco.imprimirDatosEnConsola();

    int menu = 0;
    while (menu != 3)
    {
        double saldo;

        cout << "MENU" << endl;
        cout << "1. Realizar deposito" << endl;
        cout << "2. Retirar efectivo" << endl;
        cout << "3. Salir del sistema" << endl;
        cout << "Ingrese una opción:" << endl;
        cin >> menu;
        switch (menu)
        {
        case 1:
            procesarDepositar(cuentaBanco);
            break;

        case 2:
            saldo = procesarRetirar(cuentaBanco);
            cout << "Su saldo es de: " << saldo << endl;
            break;
        case 3:
            cout << "Saliendo del sistema..." << endl;
            break;
        default:
            cout << "Opción no valida." << endl;
        }
    }

    return 0;
}

void procesarDepositar(CuentaBanco cuentaBanco)
{
    int numeroDepositos;
    cout << "Cuantos depositos desea realizar?" << endl;
    cin >> numeroDepositos;

    for (int i = 0; i < numeroDepositos; i++)
    {
        double cantidadDeposito;
        cout << "Ingrese el deposito " << i + 1 << ":" << endl;
        cin >> cantidadDeposito;
        cuentaBanco.realizarDeposito(cantidadDeposito);
    }
}

double procesarRetirar(CuentaBanco cuentaBanco)
{
    int cantidadRetiro;
    cout << "Cantidad de dinero que deseas retirar?" << endl;
    cin >> cantidadRetiro;
    return cuentaBanco.retirarEfectivo(cantidadRetiro);
}
