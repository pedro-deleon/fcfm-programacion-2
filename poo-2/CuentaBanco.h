#include <string>
using namespace std;

class CuentaBanco
{
    public:
    // Constructores
    CuentaBanco();
    CuentaBanco(int numeroIdentificador,string nombrePersona, string nombreBanco, string pais);


    // Propiedades
    int numeroIdentificador;
    string nombrePersona;
    double dineroTotal;
    string nombreBanco;
    string pais;

    // Funciones
    void realizarDeposito(double cantidadDeposito);
    void imprimirDatosEnConsola();
    double retirarEfectivo(double cantidadRetiro);
};