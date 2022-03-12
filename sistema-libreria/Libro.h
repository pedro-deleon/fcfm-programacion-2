#include <string>
using namespace std;

class Libro
{
public:
    Libro();
    Libro(string nombre, string autor,
          int numeroPaginas, int año);

    string nombre;
    string autor;
    int numeroPaginas;
    int año;

    void imprimirInfoLibro();
};