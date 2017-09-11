#include <iostream.h> //Biblioteca que contiene las funciones de entrada y salida de texto
#include <stdlib.h> //Controla el proceso System

int factorial(int numero);  //Declara la funcion 

void main()
{

	int numero;

	cout << "Ingrese el numero para obtener su factorial." << endl;
   cin >> numero; //Permite al usuario ingresar el numero al que se le va calcular el factorial
   cout << "El factorial de " << numero << " es: " << factorial(numero) << endl;
   system("pause");//Pausa el sistema hasta que el usuario presione cualquier tecla

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

// Si te sirvio, suscribete!
