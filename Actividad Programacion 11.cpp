#include "iostream"
#include "string"
#include "cmath"
using namespace std;

int main()
{
float MAT,a,b,c,d,e,RES;
cout<<"Escribe el valor del lado del triangulo" <<"\n";
cin>>a;
cout<<"Escribe el valor del lado del triangulo" <<"\n";
cin>>b;
cout<<"Escribe el valor del lado del triangulo" <<"\n";
cin>>c;

d=(a+b+c)/2;
e= sqrt(d*(d-a)*(d-b)*(d-c));
cout<<"La variable auxiliar vale " <<d;
cout<<" y el resultado es " <<e;
return 0;
}