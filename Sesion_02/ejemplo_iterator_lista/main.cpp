#include <iostream>
using namespace std;

// Lista enlazada simple que permite el uso de range-for
class ListaEnlazada {
    // Nodo interno: cada elemento guarda un dato y un puntero al siguiente
    struct Nodo {
        int dato;
        Nodo* sig;
        Nodo(int d, Nodo* s = nullptr) : dato(d), sig(s) {}
    };
    Nodo* cabeza = nullptr;   // primer nodo (nullptr si lista vacía)

public:

    void insertarAlFrente(int x) {
        cabeza = new Nodo(x, cabeza);
    }

    // Clase iterador que permite recorrer la lista
    class Iterador {
        Nodo* actual;
    public:
        Iterador(Nodo* n) : actual(n) {}

        // obtiene el dato del nodo actual
        int& operator*() { return actual->dato; }

        // Avanza al siguiente nodo
        Iterador& operator++() { actual = actual->sig; return *this; }

        // Saber si se llego al final
        bool operator!=(const Iterador& o) const { return actual != o.actual; }
    };

    // begin() devuelve un iterador al primer elemento
    Iterador begin() { return Iterador(cabeza); }

    // end() devuelve un iterador que representa "más allá del último"
    Iterador end() { return Iterador(nullptr); }
};

int main() {
    ListaEnlazada L;
    L.insertarAlFrente(3);
    L.insertarAlFrente(2);
    L.insertarAlFrente(1);

    cout << "Elementos de la lista (orden inverso al de insercion): ";
    for (int x : L)
        cout << x << " ";
    cout << endl;

    return 0;
}