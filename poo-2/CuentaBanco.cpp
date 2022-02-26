#include <string>
#include <iostream>
#include "CuentaBanco.h"

using namespace std;

// Constructores
CuentaBanco::CuentaBanco()
{
    numeroIdentificador = 10;
    nombreBanco = "BANXICO";
    nombrePersona = "Anonimo";
    pais = "SIN IDENTIFICAR";
}

CuentaBanco::CuentaBanco(int numeroIdentificador,string nombrePersona, string nombreBanco, string pais)
{
    this->numeroIdentificador = numeroIdentificador;
    this->nombrePersona = nombrePersona;
    this->nombreBanco = nombreBanco;
    this->pais = pais;
    this->dineroTotal = 0;
}

// implementacion de los métodos de la clase CuentaBanco.h
void CuentaBanco::realizarDeposito(double cantidadDeposito)
{
    dineroTotal = dineroTotal + cantidadDeposito;
}


double CuentaBanco::retirarEfectivo(double cantidadRetiro)
{
    this -> dineroTotal = this -> dineroTotal - cantidadRetiro;
    return this -> dineroTotal;    
}

void CuentaBanco::imprimirDatosEnConsola()
{
    cout << "Numero Identificador: " << numeroIdentificador << endl;
    cout << "Nombre del Banco: " << nombreBanco << endl;
    cout << "Nombre: " << nombrePersona << endl;
    cout << "Pais: " << pais << endl;
}
