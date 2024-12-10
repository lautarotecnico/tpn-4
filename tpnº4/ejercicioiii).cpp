#include <iostream>
#include <string>

using namespace std;

int contarCaracter(const string &cadena, char caracter) 
{
    int conteo = 0;
    for (char c : cadena) {
        if (c == caracter) {
            conteo++;
        }
    }
    return conteo;
}

int main() 
{
    string cadena;
    char caracter;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);
    cout << "Ingrese el caracter a contar: ";
    cin >> caracter;

    int resultado = contarCaracter(cadena, caracter);
    cout << "El caracter '" << caracter << "' aparece " << resultado << " veces." << endl;

    return 0;
}
