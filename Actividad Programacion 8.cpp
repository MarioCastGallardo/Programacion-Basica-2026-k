#include "iostream"
#include "string"

using namespace std;

int main()
{
float a,b;
cout<<"Escribe la cantidad de galones de gasolina" <<"\n";
cin>>a;
b=((a)*3.785)*8.2;
cout<<"La cantidad que tiene que pagar el cliente por los litros de gasolina es " <<b;

return 0;
}