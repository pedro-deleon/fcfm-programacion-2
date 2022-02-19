#include <string>
using namespace std;

class CuentaBanco
{
    public:
        int numeroIdentificador;
        string nombrePersona;
        string nombreBanco;
        double dineroTotal;
        string pais;

        void realizarDeposito(double cantidadDeposito);
};