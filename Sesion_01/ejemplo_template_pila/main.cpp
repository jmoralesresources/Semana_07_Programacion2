#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

// Implementa internamente con un vector
template<typename T>
class Pila {
    vector<T> datos;
public:
    void push(const T& x) { datos.push_back(x); }

    void pop() {
        if (datos.empty()) throw runtime_error("Pila vacia");
        datos.pop_back();
    }

    T& top() {
        if (datos.empty()) throw runtime_error("Pila vacia");
        return datos.back();
    }

    bool empty() const { return datos.empty(); }
};

int main() {
    cout << " ===== Pila de enteros =====" << endl;
    Pila<int> pi;
    pi.push(1);
    pi.push(2);
    cout << "Tope de pila de enteros: " << pi.top() << endl;
    pi.pop();
    cout << "Despues de pop, tope: " << pi.top() << endl;

    cout << " ===== Pila de cadenas =====" << endl;
    Pila<string> ps;
    ps.push("hola");
    cout << "Tope de pila de strings: " << ps.top() << endl;



    cout << " ===== Manejo de excepcion =====" << endl;
    try {
        Pila<double> pilaVacia;
        pilaVacia.top();   //  lanza excepción
    } catch (const runtime_error& e) {
        cout << "Excepcion capturada: " << e.what() << endl;
    }

    return 0;
}