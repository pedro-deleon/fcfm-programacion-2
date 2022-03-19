#include <string>
#include <vector>



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

};