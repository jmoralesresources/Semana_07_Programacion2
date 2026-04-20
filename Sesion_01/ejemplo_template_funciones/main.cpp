#include <iostream>
#include <vector>
#include <string>
using namespace std;

template<typename T>
T maximo(T a, T b) {
    // Devuelve el mayor de los dos valores
    return a > b ? a : b;
}

// Busca el valor 'x' dentro del vector 'v'
template<typename T>
int buscar(const vector<T>& v, const T& x) {
    for (size_t i = 0; i < v.size(); i++)
        if (v[i] == x) return i;   // encontrado
    return -1;                      // no encontrado
}

int main() {
    cout << "Maximo entre 3 y 7: " << maximo(3, 7) << endl;

    cout << "Maximo entre 3.14 y 2.71: " << maximo(3.14, 2.71) << endl;

    cout << "Maximo entre 'hola' y 'adios': " << maximo(string("hola"), string("adios")) << endl;

    // buscar en vector de enteros
    vector<int> vi = {10, 20, 30};
    int pos = buscar(vi, 20);
    cout << "El valor 20 esta en la posicion: " << pos << endl;

    return 0;
}