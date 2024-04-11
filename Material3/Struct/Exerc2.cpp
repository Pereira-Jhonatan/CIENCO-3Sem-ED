/* Desenvolver um programa que registre detalhes de livros em
uma biblioteca, como t�tulo, autor e ano de publica��o. O
programa deve continuar solicitando informa��es at� que um
t�tulo de livro espec�fico seja inserido. */

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
        cout << "\nDigite o t�tulo do livro: ";
        getline(cin, livro.titulo);

        if(livro.titulo == tituloParada)
        {
            break;
        }

        cout << "Digite o autor do livro: ";
        getline(cin, livro.autor);
        cout << "Digite o ano de publica��o: ";
        cin >> livro.ano;

        system ("cls || clear");
        cout << "\nLivro: " << livro.titulo << " | Autor: " << livro.autor << " | Ano de publica��o: " << livro.ano << endl;

        cout << "\nDeseja adicionar um novo livro? (s/n) ";
        cin >> continuar;
        cin.ignore();
        continuar = tolower(continuar);

    } while (continuar == 's');
}
