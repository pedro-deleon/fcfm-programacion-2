#include <iostream>
#include "CuentaBanco.h"
using namespace std;

int main()
{

    CuentaBanco miCuentaBanco;

    cout << "Bienvenido al Sistema Banco" << endl;
    cout << "Registre sus datos";
    cout << "¿Cual es su nombre?" << endl;
    getline(cin, miCuentaBanco.nombrePersona);
    cout << "¿Cual es su país?" << endl;
    getline(cin, miCuentaBanco.pais);


    int i = 1;
    while(i == 1)
    {
        
        cout << "Procesando información..." << endl;
        cout << "Escriba la cantidad que desea depositar" << endl;
        double cantidadDeposito;
        cin >> cantidadDeposito;
        miCuentaBanco.realizarDeposito(cantidadDeposito);


        cout << "Desea realizar otro deposito?" << endl;
        cout << "Escriba un 1 para SI o cualquier otro caracter para SALIR" << endl;
        cin >> i;

    }

    cout << "La cantidad total de su cuenta es: " << miCuentaBanco.dineroTotal << "$" << endl;














    return 0;
}