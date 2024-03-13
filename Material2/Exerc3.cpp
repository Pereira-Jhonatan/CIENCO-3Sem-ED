/* Ler um vetor A de 10 n�meros. Ap�s, ler mais um n�mero e guardar em
uma vari�vel X. Armazenar em um vetor M o resultado de cada
elemento de A multiplicado pelo valor X. Logo ap�s, imprimir o vetor M */

#include <iostream>
#include <locale>

using namespace std;

#define NUM 10

int main ()
{

  setlocale(LC_ALL, "Portuguese");

  int vetA[NUM], vetM[NUM], X;


  for (int i = 0; i < NUM; i++){

	  cout << "Digite o " << i + 1 << "� n�mero:" << endl;
	  cin >> vetA[i];

  }

  cout << "\nN�mero para a multiplica��o: " << endl;
  cin >> X;

  cout << "\n\nProduto dos n�meros por " << X << endl << endl;

  for (int i = 0; i < NUM; i++){

    vetM[i] = vetA[i] * X;

    cout << vetA[i] << " x " << X << " = " << vetM[i] << endl;

  }

}
