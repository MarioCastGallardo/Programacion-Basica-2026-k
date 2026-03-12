#include "iostream"
#include "string"

using namespace std;

int main()
{
	 //Mensaje de bienvenida
	 cout << "Hola! Este programa 1.6. Escribe los datos en orden inverso" << "\n";
	 
	 //Se declaran los números que se sumarán (pueden ser decimales)
	 int A,B,C,D;
	 
	 //Se pide el primer número
	 cout<< "Por favor ingrese el primer valor A: " << "\n";
	 
	 //Se asigna el primer valor a A
	 cin >> A;
	 
	 //Se pide el segundo número
	 cout<< "Por favor ingrese el primer valor B: " << "\n";
	 
	 //Se asigna el segundo valor a B
	 cin >> B;
	 
	 //Se pide el tercer número
	 cout<< "Por favor ingrese el primer valor C: " << "\n";
	 
	 //Se asigna el tercer valor a C
	 cin >> C;
	 
	 //Se pide el cuarto número
	 cout<< "Por favor ingrese el primer valor D: " << "\n";
	 
	 //Se asigna el cuarto valor a D
	 cin >> D;
	 
	 //Se muestra el resultado
	 cout << D << " , " << C << " , " << B << " , " << A;
	 
	 return 0;	 
}