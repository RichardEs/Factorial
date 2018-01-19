#include <iostream.h> 
#include <stdlib.h> 

int factorial(int numero);  

void main()
{

	int numero;

	cout << "Ingrese el numero para obtener su factorial." << endl;
   cin >> numero; 
   cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
   system("pause");

}

int factorial(int num) //Funcion que calcula el factorial
{
	int resultado = 1;
	for (int i = 1; i<=num; i++) // n! = 1x2x3x4x...x(n-1)x n Donde N es el numero que el usuario ingresa
   {
   	resultado = resultado * i;
   }
	return resultado;
}

