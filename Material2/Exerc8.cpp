/* Escreva um programa em C++ que crie um array de 5 inteiros, preencha-o
com valores fornecidos pelo usu�rio e, em seguida, calcule a m�dia dos
valores usando ponteiros. */

#include <iostream>
#include <locale>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float soma = 0;
	int vet[5];
	int* pVet = &vet[0];



	for(int i = 0; i < 5; i++){
		cout << "Entre com o " << i + 1 << "� valor: " << endl;
        cin >> vet[i];
	}

	for(int i = 0; i < 5; i++){

		soma += *pVet;

		pVet++;
	}

	cout << endl;
	cout << "A m�dia desses n�meros �: " << soma / 5;


}
