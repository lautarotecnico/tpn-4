#include <iostream>
#include <string>

std::string concatenarCadenas(const std::string &cadena1, const std::string &cadena2) 
{
    return cadena1 + cadena2;
}

int main() 
{
    std::string cadena1, cadena2;
    std::cout << "Ingrese la primera cadena: ";
    std::getline(std::cin, cadena1);
    std::cout << "Ingrese la segunda cadena: ";
    std::getline(std::cin, cadena2);

    std::string resultado = concatenarCadenas(cadena1, cadena2);
    std::cout << "Cadenas concatenadas: " << resultado << std::endl;

    return 0;
}
