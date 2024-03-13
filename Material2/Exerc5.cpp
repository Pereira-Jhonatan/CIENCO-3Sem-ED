/* Fa�a um programa em C++ para ler um valor N qualquer (que ser� o
tamanho dos vetores). Ap�s, ler dois vetores A e B (de tamanho N cada um)
e depois armazenar em um terceiro vetor Soma a soma dos elementos do
vetor A com os do vetor B (respeitando as mesmas posi��es) e escrever o
vetor Soma. */

#include <iostream>
#include <locale>

using namespace std;

int main ()
{

  setlocale(LC_ALL, "Portuguese");

  int N;

  cout << "Digite a quantidade de n�meros: " << endl;
  cin >> N;

  int vetA[N], vetB[N], vetSoma[N];


  cout << "\n-- Vetor A --" << endl;

  for (int i = 0; i < N; i++){

	  cout << "Digite o " << i + 1 << "� n�mero:" << endl;
	  cin >> vetA[i];

  }

  cout << endl << endl << "\n-- Vetor B --" << endl;

  for (int i = 0; i < N; i++){

	  cout << "Digite o " << i + 1 << "� n�mero:" << endl;
	  cin >> vetB[i];

  }


  cout << "\n\n-- Soma dos Vetores --" << endl << endl;

  for (int i = 0; i < N; i++){

    vetSoma[i] = vetA[i] + vetB[i];

    cout << vetA[i] << " + " << vetB[i] << " = " << vetSoma[i] << endl;

  }

}
