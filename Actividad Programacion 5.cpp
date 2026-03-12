#include "iostream"
#include "string"

using namespace std;

int main()
{
	float a,b,are,per;
	
	cout<<"Escribe la base" <<"\n";
	cin>>a;
	
	cout<<"Escribe la altura" <<"\n";
	cin>>b;
	
	are=a*b;
	per=2*(a+b);
	
	cout<<"El area es " <<are;
	cout<<" y el perimetro es "<<per;
	return 0;
}
	