#include <iostream>
using namespace std;

int main()
{
    //cracion de variables
    int x=10;
    int arreglo[5]={3,4,5,6,7};
    
    //acceder a los valores
    cout <<x<<endl;
    
    //accerder a un arreglo
    cout << arreglo[0] <<endl; //accediendo al primer elemento
    cout << arreglo[4] <<endl; //accediendo al ultimo elemento
    
    cout <<"Mostrando el contendido del bucle"<<endl;
    //bucle
    for (auto i: arreglo)
    {
        cout << i<<endl;
        
    }
    
    return 0;
}