#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

string concatenarCadenas(const string &cadena1, const string &cadena2) {
    return cadena1 + cadena2;
}

string reversoCadena(const string &cadena)
 {
    string reverso = cadena;
    reverse(reverso.begin(), reverso.end());
    return reverso;
}

int contarCaracter(const string &cadena, char caracter)
 {
    int conteo = 0;
    for (char c : cadena) 
    {
        if (c == caracter)
         {
            conteo++;
        }
    }
    return conteo;
}

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
    int opcion;
    do 
    {
        cout << "Seleccione una opción:" << endl;
        cout << "1. Concatenar dos cadenas" << endl;
        cout << "2. Reverso de una cadena" << endl;
        cout << "3. Contar ocurrencias de un carácter" << endl;
        cout << "4. Contar letras en una cadena" << endl;
        cout << "5. Salir" << endl;
        cout << "Opción: ";
        cin >> opcion;
        cin.ignore();

        switch(opcion) 
        {
            case 1:
             {
                string cadena1, cadena2;
                cout << "Ingrese la primera cadena: ";
                getline(cin, cadena1);
                cout << "Ingrese la segunda cadena: ";
                getline(cin, cadena2);
                cout << "Resultado: " << concatenarCadenas(cadena1, cadena2) << endl;
                break;
            }
            case 2: 
            {
                string cadena;
                cout << "Ingrese una cadena: ";
                getline(cin, cadena);
                cout << "Resultado: " << reversoCadena(cadena) << endl;
                break;
            }
            case 3:
             {
                string cadena;
                char caracter;
                cout << "Ingrese una cadena: ";
                getline(cin, cadena);
                cout << "Ingrese el caracter a contar: ";
                cin >> caracter;
                cout << "Resultado: " << contarCaracter(cadena, caracter) << endl;
                break;
            }
            case 4: 
            {
                string cadena;
                cout << "Ingrese una cadena: ";
                getline(cin, cadena);
                cout << "Resultado: " << contarLetras(cadena) << endl;
                break;
            }
            case 5:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida" << endl;
                break;
        }
    } while(opcion != 5);

    return 0;
}
