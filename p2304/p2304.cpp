// p2304.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main()
{
	
	    //Faça um algoritmo que leia a idade de uma pessoa expressa em dias e mostre - a expressa em anos,
		//meses e dias.

		 //Variaveis

		 int D;

		 int A;
		 int M;
		 int T;


		
	     //Coletar da interface

		 cout << "Digite a idade em dias: ";
		 cin >> D;


		 //Calculos
		 T = D / 365;
		 M = ((D % 365) / 30);
		 D = ((D % 365) % 30);

		                 
	     //Imprimir na tela
		 
			 cout << "\nA idade em anos:\n" << T;
		 
		 
			 cout << "\nA idade em meses:\n" << M;
		 
		 
			 cout << "\nA idade em dias:\n" << D;
		 

}



	








