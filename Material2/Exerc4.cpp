/* Fa�a um programa em C++ para ler 20 n�meros e armazenar em um vetor.
Ap�s a leitura total dos 20 n�meros, o algoritmo deve escrever esses 20
n�meros lidos na ordem inversa */

#include <iostream>
#include <locale>

using namespace std;

#define TAM 20

int main(){

    setlocale(LC_ALL, "Portuguese");

    int vet[TAM];

    for(int i = 0; i < TAM; i++){

        cout << "Digite o n�mero: " << endl;
        cin >> vet[i];

        cout << endl;

    }

    for(int i = TAM - 1; i >= 0; i--){

        cout << vet[i] << " ";

    }

}
