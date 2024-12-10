#include <iostream>
#include <vector>

using namespace std;

void sumaYPromedio(const vector<int> &vector) 
{
    int suma = 0;
    for (int num : vector) 
    {
        suma += num;
    }
    double promedio = static_cast<double>(suma) / vector.size();
    cout << "Suma: " << suma << endl;
    cout << "Promedio: " << promedio << endl;
}

int main()
 {
    int n;
    cout << "Ingrese la cantidad de elementos del vector: ";
    cin >> n;

    vector<int> vector(n);
    cout << "Ingrese " << n << " enteros:" << endl;
    for (int i = 0; i < n; i++) 
    {
        cin >> vector[i];
    }

    sumaYPromedio(vector);

    return 0;
}
