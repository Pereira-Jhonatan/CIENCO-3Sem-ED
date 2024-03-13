/* Fa�a um programa em C++ para ler e armazenar em um vetor a temperatura
m�dia de todos os dias do ano. Calcular e escrever:
a) Menor temperatura do ano
b) Maior temperatura do ano
c) Temperatura m�dia anual
d) O n�mero de dias no ano em que a temperatura foi inferior a m�dia
anual
*/

#include <iostream>
#include <locale>

using namespace std;

#define DIAS 365

float mediaTemp(float vet[]){

  float soma = 0;

  for (int i = 0; i < DIAS; i++){

	  soma += vet[i];

  }

  return soma / DIAS;

}


int main ()
{

  setlocale(LC_ALL, "Portuguese");

  int abaixo = 0, menor = 0, maior = 0;
  float vet[DIAS], media;

  cout << "Digite a Temperatura do 1� dia: " << endl;
  cin >> vet[0];

  menor = vet[0];
  maior = vet[0];

  for (int i = 1; i < DIAS; i++){

	  cout << "Digite a Temperatura do " << i + 1 << "� dia: " << endl;
	  cin >> vet[i];

      if(vet[i] < menor){

          menor = vet[i];

      }

      if(vet[i] > maior){

          maior = vet[i];

      }

  }

  media = mediaTemp(vet);

  cout << "\nM�dia: " << media << endl;

  for (int i = 0; i < DIAS; i++){

    if (vet[i] < media){

      abaixo++;

    }

  }

  cout << "\n\n-- An�lise das Temperaturas do Ano --" << endl << endl;

  cout << "Maior temperatura: " << maior << "�" << endl;
  cout << "Menor temperatura: " << menor << "�" << endl;
  cout << "M�dia de temperatura: " << media << "�" << endl;
  cout << "Dias abaixo da m�dia: " << abaixo;

}
