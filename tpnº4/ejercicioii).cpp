#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string reversoCadena(const string &cadena) 
{
    string reverso = cadena;
    reverse(reverso.begin(), reverso.end());
    return reverso;
}

int main() 
{
    string cadena;
    cout << "Ingrese una cadena: ";
    getline(cin, cadena);

    string resultado = reversoCadena(cadena);
    cout << "Cadena en reverso: " << resultado << endl;

    return 0;
}
