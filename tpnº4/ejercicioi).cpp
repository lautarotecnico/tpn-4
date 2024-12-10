#include <iostream>
#include <string>

using namespace std;

string concatenarCadenas(const string &cadena1, const string &cadena2) {
    return cadena1 + cadena2;
}

int main() {
    string cadena1, cadena2;
    cout << "Ingrese la primera cadena: ";
    getline(cin, cadena1);
    cout << "Ingrese la segunda cadena: ";
    getline(cin, cadena2);

    string resultado = concatenarCadenas(cadena1, cadena2);
    cout << "Cadenas concatenadas: " << resultado << endl;

    return 0;
}
