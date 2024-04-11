/* Crie uma estrutura chamada pessoa que seja capaz de
armazenar o nome, o endereço, o CPF e a idade de 5
pessoas. */

#include <iostream>
#include <locale>
#include <string>

using namespace std;

struct Pessoa
{
    string nome;
    string endereco;
    string cpf;
    int idade;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Pessoa pessoa[5];

    for(int i = 0; i < 5; i++)
    {

        cout << "Entre com o nome: " << endl;
        getline(cin, pessoa[i].nome);

        cout << "Entre com o endereço: " << endl;
        getline(cin, pessoa[i].endereco);

        cout << "Entre com o CPF: " << endl;
        getline(cin, pessoa[i].cpf);

        cout << "Entre com a idade: " << endl;
        cin >> pessoa[i].idade;

        cin.ignore();

        cout << endl << endl;
    }

    cout << endl;

    for(int i = 0; i < 5; i++)
    {

        cout << "\nPessoa "<< i + 1 << endl;
        cout << "Nome: " << pessoa[i].nome << endl;
        cout << "Endereço: " << pessoa[i].endereco << endl;
        cout << "CPF: " << pessoa[i].cpf << endl;
        cout << "Idade: " << pessoa[i].idade << endl;
        cout << " -------------- \n" << endl;
    }
}
