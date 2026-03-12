#include "iostream"
#include "string"
#include "cmath"
using namespace std;

int main()
{
float MAT,a,b,c,d,e,RES;
cout<<"Escribe la primer coordenada" <<"\n";
cin>>a;
cout<<"Escribe la segunda coordenada" <<"\n";
cin>>b;
cout<<"Escribe la tercer coordenada" <<"\n";
cin>>c;
cout<<"Escribe la cuarta coordenada" <<"\n";
cin>>d;

e=sqrt((a-b)*(a-b)+(c-d)*(c-d));
cout<<"El resultado es " <<e;

return 0;
}