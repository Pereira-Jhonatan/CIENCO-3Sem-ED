/* Crie um typedef para um vetor de inteiros chamado
VetorInteiros. Em seguida, crie um programa que declare e
inicialize um vetor de 5 inteiros usando o typedef e exiba os
valores na tela. */

#include <iostream>
#include <locale>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

typedef vector<int> VetorInteiros;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand (time(NULL));

    VetorInteiros inteiros(5);

    for (int i = 0; i < 5; i++)
    {
        inteiros[i] = rand() % 100 + 1;
    }

    cout << "Números:\n\n";

    for (int i = 0; i < 5; i++)
    {
        cout << " " << inteiros[i];
    }

    cout << endl;
}

