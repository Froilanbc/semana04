#include <iostream>
using namespace std;

int main()
{
    // crear el arreglo
    int arreglo[10]={1,4,5,3,10,200,21,11,66,67};
    
    // crear la variale maximo
    int max = arreglo [0];
    
    // recorriamos el arreglo
    for (auto i:arreglo)
    {
        // si la variable max es menor que i, max se convierte en i
        if (max > i)
        max=i;
        
    }
    
    // presentar el maximo
    cout <<"El valor minimo es: "<<max<<endl;
    
    return 0;
}