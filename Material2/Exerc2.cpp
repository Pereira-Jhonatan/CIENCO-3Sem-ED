/* Escreva um programa em C++ que permita a leitura das notas de uma
turma de 20 alunos. Calcular a média da turma e contar quantos alunos
obtiveram nota acima desta média calculada. Escrever a média da turma
e o resultado da contagem. */

#include <iostream>
#include <locale>

using namespace std;

#define NOTAS 20

float mediaValoresVetor(float vet[], int tam){

  float soma = 0;

  for (int i = 0; i < NOTAS; i++){

	  soma += vet[i];

  }

  return soma / tam;

}


int main ()
{

  setlocale(LC_ALL, "Portuguese");

  int acima = 0;
  float vet[NOTAS], media;


  for (int i = 0; i < NOTAS; i++){

	  cout << "Digite a nota " << i + 1 << ": ";
	  cin >> vet[i];

  }

  media = mediaValoresVetor(vet, NOTAS);

  cout << "\nMédia: " << media << endl;

  for (int i = 0; i < NOTAS; i++){

    if (vet[i] > media){

      acima++;

    }

  }

  cout << "\nValores acima da média: " << acima << endl;
  cout << "Valores abaixo da média: " << NOTAS - acima;

}
