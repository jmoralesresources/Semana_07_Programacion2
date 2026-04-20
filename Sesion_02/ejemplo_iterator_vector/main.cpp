#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};

    // v.begin() → iterador al primer elemento
    // v.end()   → iterador que apunta "después del último"
    cout << "Recorrido con iterador: ";
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Más legible
    cout << "Recorrido con range-for: ";
    for (int x : v) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}