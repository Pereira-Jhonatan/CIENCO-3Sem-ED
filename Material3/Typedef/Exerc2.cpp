<<<<<<< HEAD
/* crie um typedef para uma lista de animais chamada ListaAnimais,
que deve ser um vetor de 10 elementos do tipo Animal.
Por fim, crie um programa que pede ao usuário para digitar os dados de 10
animais e armazena esses dados em uma variável do tipo ListaAnimais.
Ao final, o programa deve exibir os dados de cada um dos 10 animais na tela. */

#include <iostream>
#include <locale>
#include <string>

using namespace std;

typedef struct Animal ListaAnimais;

struct Animal
{
    string nome;
    string especie;
    int idade;
    float peso;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    ListaAnimais animais[10];

    cout << "Cadastro de Animais" << endl;

    for(int i = 0; i < 10; i++)
    {

        cout << "Entre com o nome: " << endl;
        getline(cin, animais[i].nome);

        cout << "Entre com a espécie: " << endl;
        getline(cin, animais[i].especie);

        cout << "Entre com a idade: " << endl;
        cin >> animais[i].idade;

        cout << "Entre com o peso (kg): " << endl;
        cin >> animais[i].peso;

        cin.ignore();

        cout << endl << endl;
    }

    cout << endl;

    for(int i = 0; i < 10; i++)
    {

        cout << "\nAnimal "<< i + 1 << endl;
        cout << "Nome: " << animais[i].nome << endl;
        cout << "Especie: " << animais[i].especie << endl;
        cout << "Idade: " << animais[i].idade << endl;
        cout << "Peso: " << animais[i].peso << "kg" << endl;
        cout << " -------------- \n" << endl;
    }
}
=======
/* crie um typedef para uma lista de animais chamada ListaAnimais,
que deve ser um vetor de 10 elementos do tipo Animal.
Por fim, crie um programa que pede ao usuário para digitar os dados de 10
animais e armazena esses dados em uma variável do tipo ListaAnimais.
Ao final, o programa deve exibir os dados de cada um dos 10 animais na tela. */

#include <iostream>
#include <locale>
#include <string>

using namespace std;

typedef struct Animal ListaAnimais;

struct Animal
{
    string nome;
    string especie;
    int idade;
    float peso;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    ListaAnimais animais[10];

    cout << "Cadastro de Animais" << endl;

    for(int i = 0; i < 10; i++)
    {

        cout << "Entre com o nome: " << endl;
        getline(cin, animais[i].nome);

        cout << "Entre com a espécie: " << endl;
        getline(cin, animais[i].especie);

        cout << "Entre com a idade: " << endl;
        cin >> animais[i].idade;

        cout << "Entre com o peso (kg): " << endl;
        cin >> animais[i].peso;

        cin.ignore();

        cout << endl << endl;
    }

    cout << endl;

    for(int i = 0; i < 10; i++)
    {

        cout << "\nAnimal "<< i + 1 << endl;
        cout << "Nome: " << animais[i].nome << endl;
        cout << "Especie: " << animais[i].especie << endl;
        cout << "Idade: " << animais[i].idade << endl;
        cout << "Peso: " << animais[i].peso << "kg" << endl;
        cout << " -------------- \n" << endl;
    }
}
>>>>>>> 4d89c018ea423ceb1fba011aec5349ba292c7db2
