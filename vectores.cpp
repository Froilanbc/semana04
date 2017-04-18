#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //crear el vector
    vector<int>vec={1,4,5,3,10,200,21,11,66,67};
    
    vec.push_back(1);
    vec.push_back(4);
    vec.push_back(5);
    
    //tamaño del vector
    cout<<"El tamaño es: "<<vec.size()<<endl;
    
    //usando el operador []
    for (int i=0; i<vec.size(); i++)
    cout <<vec[i]<<endl;
    
    //usando el metodo at()
    for (int i=0; i<<vec.size(); i++)
    cout <<vec.at(i)<<endl;
    
    vec.push_back(5);
    
    //tamaño del vector
    cout<<"El tamaño es: "<<vec.size()<<endl;
    
    for (auto i: vec)
    {
        cout << i <<endl;
    }
    
    return 0;
}