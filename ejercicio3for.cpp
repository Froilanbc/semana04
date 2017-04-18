#include <iostream>
using namespace std;

int main()
{
    //creacion de variables
    int n=0;
    
    //ingreso de datos
    cout <<"Ingrese el numero de datos: "<<endl;
    cin >>n;
    
    //variable de total
    int total=0;
    
    //fot antiguo
    for (int i=2; i<=n; i+=2)
    {
        total = total + i;
    }
    
    //mostrar el resultado
    cout<<"El total es: "<<total<<endl;
    
    return 0;
}