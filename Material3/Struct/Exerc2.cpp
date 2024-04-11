/* Desenvolver um programa que registre detalhes de livros em
uma biblioteca, como título, autor e ano de publicação. O
programa deve continuar solicitando informações até que um
título de livro específico seja inserido. */

#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

struct Livro
{
    string titulo;
    string autor;
    int ano;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Livro livro;
    char continuar;
    string tituloParada = "Fim";

    do
    {
        cout << "\nPara sair digite o titulo Fim";
        cout << "\nDigite o título do livro: ";
        getline(cin, livro.titulo);

        if(livro.titulo == tituloParada)
        {
            break;
        }

        cout << "Digite o autor do livro: ";
        getline(cin, livro.autor);
        cout << "Digite o ano de publicação: ";
        cin >> livro.ano;

        system ("cls || clear");
        cout << "\nLivro: " << livro.titulo << " | Autor: " << livro.autor << " | Ano de publicação: " << livro.ano << endl;

        cout << "\nDeseja adicionar um novo livro? (s/n) ";
        cin >> continuar;
        cin.ignore();
        continuar = tolower(continuar);

    } while (continuar == 's');
}
