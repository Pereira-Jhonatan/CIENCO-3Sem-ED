/* Construir um programa para avaliar filmes, pedindo ao
usu�rio para avaliar diferentes aspectos como enredo, atua��o e
efeitos especiais. Calcule a m�dia das notas avaliadas em
enredo, atua��o e efeitos especiais. O programa deve permitir a
avalia��o de v�rios filmes. O programa deve parar quando
usu�rio n�o desejar mais continuar. */

#include <iostream>
#include <locale>
#include <stdlib.h>
#include <iomanip>

using namespace std;

struct Filme
{
    string titulo;
    float enredo;
    float atuacao;
    float cgi;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Filme filme;
    char continuar;
    int totalFilmes = 0;
    float media = 0.0;
    double totalEnredo = 0.0;
    double totalAtuacao = 0.0;
    double totalCgi = 0.0;
    double mediaEnredo = 0.0;
    double mediaAtuacao = 0.0;
    double mediaCgi = 0.0;

    cout << fixed;
    cout << setprecision(2);

    do
    {
        totalFilmes++;

        cout << "\nDigite o nome do filme: ";
        getline(cin, filme.titulo);
        cout << "Digite uma nota para o enredo (1 a 5): ";
        cin >> filme.enredo;
        cout << "Digite um nota para a atua��o (1 a 5): ";
        cin >> filme.atuacao;
        cout << "Digite uma nota para os efeitos especiais (1 a 5): ";
        cin >> filme.cgi;

        totalEnredo += filme.enredo;
        totalAtuacao += filme.atuacao;
        totalCgi += filme.cgi;

        media = (filme.enredo + filme.atuacao + filme.cgi) / 3;

        system ("cls || clear");
        cout << "\nFilme: " << filme.titulo << " | Nota do filme: " << media
             << "\nEnredo: " << filme.enredo << " | Atua��o: " << filme.atuacao << " | Efeitos especiais: " << filme.cgi << endl;

        cout << "\nDeseja adicionar um novo filme? (s/n) " << endl;
        cin >> continuar;
        cin.ignore();
        continuar = tolower(continuar);

    } while (continuar == 's');

     mediaEnredo = totalEnredo / totalFilmes;
     mediaAtuacao = totalAtuacao / totalFilmes;
     mediaCgi = totalCgi / totalFilmes;

     cout << "M�dia Enredo: " << mediaEnredo << endl;
     cout << "M�dia Atua��o: " << mediaAtuacao << endl;
     cout << "M�dia Efeitos Especiais: " << mediaCgi << endl;

}
