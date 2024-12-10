#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int contarLetras(const string &cadena)
 {
    int conteo = 0;
    for (char c : cadena)
     {
        if (isalpha(c)) 
        {
            conteo++;
        }
    }
    return conteo;
}

int main()
 {
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    int resultado = contarLetras(cadena);
    cout << "La cadena contiene " << resultado << " letras." << endl;

    return 0;
}
