#include "iostream"
#include "string"

using namespace std;

int main()
{
float a,b,c,d;
cout<<"Escribe el radio" <<"\n";
cin>>a;
cout<<"Escribe la altura" <<"\n";
cin>>b;
c=3.141592*(a*a)*b;
d=2*3.141592*a*b;
cout<<"El volumen del circulo es " <<c;
cout<<" y el area es " <<d;


return 0;
}