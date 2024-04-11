<<<<<<< HEAD
/* Crie uma enumeração chamada Cores para representar cores
básicas (por exemplo, vermelho, verde, azul). Em seguida, crie
um typedef para Cores chamado TipoCor. Crie um programa que
permita ao usuário escolher uma cor usando o typedef e exiba a
cor escolhida na tela. */

#include <iostream>
#include <locale>

using namespace std;

typedef enum {CIANO, MAGENTA, AMARELO, BLACK} TipoCor;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Digite o número da cor desejada: " << endl;
    cout << " 1 - Ciano " << endl;
    cout << " 2 - Magenta " << endl;
    cout << " 3 - Yellow" << endl;
    cout << " 4 - Black" << endl;
    cin >> num;

    TipoCor escolha;

    if (num >= 1 && num <= 4)
    {
        escolha = static_cast<TipoCor>(num - 1);

        cout << "\nA cor escolhida foi: ";

        switch(escolha)
        {
            case CIANO: cout << "Ciano!";
            break;

            case MAGENTA: cout << "Magenta!";
            break;

            case AMARELO: cout << "Yellow!";
            break;

            case BLACK: cout << "Black!";
            break;
        }

        cout << endl;

    } else
    {
        cout << "Opção inválida!" << endl;
    }
}
=======
/* Crie uma enumeração chamada Cores para representar cores
básicas (por exemplo, vermelho, verde, azul). Em seguida, crie
um typedef para Cores chamado TipoCor. Crie um programa que
permita ao usuário escolher uma cor usando o typedef e exiba a
cor escolhida na tela. */

#include <iostream>
#include <locale>

using namespace std;

typedef enum {CIANO, MAGENTA, AMARELO, BLACK} TipoCor;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;

    cout << "Digite o número da cor desejada: " << endl;
    cout << " 1 - Ciano " << endl;
    cout << " 2 - Magenta " << endl;
    cout << " 3 - Yellow" << endl;
    cout << " 4 - Black" << endl;
    cin >> num;

    TipoCor escolha;

    if (num >= 1 && num <= 4)
    {
        escolha = static_cast<TipoCor>(num - 1);

        cout << "\nA cor escolhida foi: ";

        switch(escolha)
        {
            case CIANO: cout << "Ciano!";
            break;

            case MAGENTA: cout << "Magenta!";
            break;

            case AMARELO: cout << "Yellow!";
            break;

            case BLACK: cout << "Black!";
            break;
        }

        cout << endl;

    } else
    {
        cout << "Opção inválida!" << endl;
    }
}
>>>>>>> 4d89c018ea423ceb1fba011aec5349ba292c7db2
