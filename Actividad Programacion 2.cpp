#include "iostream"
#include "string"

using namespace std;

int main()
{

	float A,B,RES;
	
	cout <<"Escribir el valor A" <<"\n";
	cin >>A;
	
	cout <<"Escribir el valor B" <<"\n";
	cin >>B;
	
	RES=(A+B)*(A+B)/3;
	cout<<"El resultado es" <<RES;
	return 0;
}