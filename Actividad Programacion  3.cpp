#include "iostream"
#include "string"

using namespace std;

int main()
{
	float MAT,a,b,c,d,e,RES;
	
	cout<<"Escribe la matricula MAT" <<"\n";
	cin>>MAT;
	
	cout<<"Escribe la calificación 1 CAL1" <<"\n";
	cin>>a;
	
	cout<<"Escribe la calificación CAL2" <<"\n";
	cin>>b;
	
	cout<<"Escribe la calificación CAL3" <<"\n";
	cin>>c;
	
	cout<<"Escribe la calificación CAL4" <<"\n";
	cin>>d;
	
	cout<<"Escribe la calificación CAL5" <<"\n";
	cin>>e;
	
	RES=(a+b+c+d+e)/5;
	
	cout<<"El resultado es "<< RES;
	cout<<" La matricula es "<< MAT;
	return 0;
}
	
	