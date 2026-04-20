#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Ejemplo con enteros
    vector<int> v = {1, 2, 3};   // inicialización
    cout << "Primer elemento de v: " << v[0] << endl;   // 1

    // Ejemplo con cadenas
    vector<string> nombres = {"Ana", "Luis"};
    cout << "Primer nombre: " << nombres[0] << endl;

    // Agregar un nuevo nombre
    nombres.push_back("Carlos");
    cout << "Nuevo tamano de nombres: " << nombres.size() << endl;

    return 0;
}