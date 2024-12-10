#include <iostream>

using namespace std;

void mostrarVectorInverso(int vector[], int tamano)
 {
    cout << "Elementos del vector en orden inverso:" << endl;
    for (int i = tamano - 1; i >= 0; i--) 
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main() 
{
    int vector[10];
    cout << "Ingrese 10 enteros:" << endl;
    for (int i = 0; i < 10; i++) 
    {
        cin >> vector[i];
    }

    mostrarVectorInverso(vector, 10);

    return 0;
}
