#include "iostream"
#include "string"

using namespace std;

int main()
{
float B,c,h,g;
string A;
cout<<"Escribe el nombre del dinosaurio" <<"\n";
cin>>A;

cout<<"Escribe el peso en toneladas del dinosaurio" <<"\n";
cin>>B;

cout<<"Escribe la longitud en pies del dinosaurio" <<"\n";
cin>>c;

h=(B)*1000;
g=c*0.3047;

cout<<"El nombre del dinosaurio es " <<A;
cout<<" el peso en libras es "<<h;
cout<<" la longitud en metros es "<<g;
return 0;
}