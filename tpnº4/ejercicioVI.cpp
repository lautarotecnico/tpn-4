#include <iostream>
#include <string>

using namespace std;

void compararCadenas(const string &cadena1, const string &cadena2) 
{
    if (cadena1 == cadena2)
     {
        cout << "Las cadenas son iguales." << endl;
    } else if (cadena1 > cadena2)
     {
        cout << "La primera cadena ingresada es mayor alfabéticamente." << endl;
    } else {
        cout << "La segunda cadena ingresada es mayor alfabéticamente." << endl;
    }
}

int main() 
{
    string cadena1, cadena2;
    cout << "Ingrese la primera cadena: ";
    getline(cin, cadena1);
    cout << "Ingrese la segunda cadena: ";
    getline(cin, cadena2);

    compararCadenas(cadena1, cadena2);

    return 0;
}
