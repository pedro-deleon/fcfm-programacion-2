#include <string>
using namespace std;

class Libro
{

public:
// Constructores
    Libro();
    Libro(string titulo, string autor,
         int numeroPaginas, int año);

    // propiedades
    string titulo;
    string autor;
    int numeroPaginas;
    int año;

    // funciones
    void imprimirInfoLibro();
    void guardarNumeroPaginas(int numeroPaginas);
    void guardarTitulo(string titutlo);

    
};