#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    cout << boolalpha;

    vector<int> miVector;
    
    // insertar en un vector
    miVector.push_back(10);
    miVector.push_back(5);




    // para agregar elementos desde teclado a un vector o arreglo puede ser de esta manera
    int miNumero;
    cout << "Ingresa el número: " << endl;
    cin >> miNumero;

    miVector.push_back(miNumero);





    // puedes utilizar el arreglo mejorado para iterar a traves del vector
    for(int num: miVector){
        cout << num << endl;
    }


    // tamaño de un vector
    cout << miVector.size() << endl;
    

    
    return 0;
}