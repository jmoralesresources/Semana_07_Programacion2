#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    // auto deduce automáticamente el tipo: vector<int>::iterator
    auto it = v.begin();
    cout << "Primer elemento: " << *it << endl;

    ++it;                    // avanza al siguiente elemento
    cout << "Segundo elemento: " << *it << endl;

    ++it;
    cout << "Tercer elemento: " << *it << endl;

    return 0;
}