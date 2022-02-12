#include <iostream>
#include <math.h>
using namespace std;

// triangulo = base * altura / 2
// area de un circulo = pi * r^2
// perimetro de un circulo = 2 * r * pi
double areaCuadrado(double lado);
double areaTriangulo(double base, double altura);
double areaCirculo(double radio);
double perimetroCirculo(double radio);



int main()
{

    return 0;
}


double areaCuadrado(double lado)
{
    double areaCuadrado = lado * lado;
    return areaCuadrado;
}

double areaTriangulo(double base, double altura)
{
    return (base * altura) / 2;
}


double areaCirculo(double radio)
{
    return M_PI * (pow(radio,2));
}

double perimetroCirculo(double radio)
{
    return 2 * radio * M_PI; 
}





