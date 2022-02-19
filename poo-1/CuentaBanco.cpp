#include<string>
#include "CuentaBanco.h"

using namespace std;

void CuentaBanco::realizarDeposito(double cantidadDeposito)
{
    dineroTotal = dineroTotal + cantidadDeposito;
}

