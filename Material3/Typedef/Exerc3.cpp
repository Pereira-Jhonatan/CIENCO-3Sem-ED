/* Crie uma estrutura chamada Endereco que armazene os
campos rua, cidade e CEP. Em seguida, crie um typedef para
Endereco chamado TipoEndereco. Crie um programa que solicite
ao usu�rio que insira informa��es de endere�o e as armazene
em uma vari�vel do tipo TipoEndereco. */

#include <iostream>
#include <locale>
#include <string>

using namespace std;

typedef struct Endereco TipoEndereco;

struct Endereco
{
    string rua;
    string cidade;
    string cep;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    TipoEndereco endereco;

    cout << "Entre com o nome da Rua: " << endl;
    getline(cin, endereco.rua);

    cout << "Entre com a cidade: " << endl;
    getline(cin, endereco.cidade);

    cout << "Entre com o CEP: " << endl;
    getline(cin, endereco.cep);

    cout << endl;

    cout << "\nEndere�o" << endl;
    cout << "Rua: " << endereco.rua << endl;
    cout << "Cidade: " << endereco.cidade << endl;
    cout << "CEP: " << endereco.cep << endl;
}
