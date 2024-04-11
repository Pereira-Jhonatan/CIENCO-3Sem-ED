<<<<<<< HEAD
/* Implementar um programa para registrar pedidos em um
restaurante, coletando informa��es como o nome do prato,
quantidade e pre�o total. O programa deve continuar recebendo
novos pedidos at� que um valor espec�fico seja inserido como
pre�o. */

#include <iostream>
#include <string>
#include <vector>
#include <locale>

using namespace std;

struct Restaurante
{
    string prato;
    float preco;
    float total;
    int quant;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    vector<Restaurante> pedidos;

    Restaurante pedido;

    do
        {

        cout << "Nome do prato: ";
        getline(cin, pedido.prato);

        cout << "Pre�o do prato: ";
        cin >> pedido.preco;

        cout << "Quantidade de pratos: ";
        cin >> pedido.quant;

        pedido.total = pedido.preco * pedido.quant;

        if(pedido.preco != 0)
            {
                pedidos.push_back(pedido);
            }

        cout << "\nPedido registrado!" << endl << endl;
        cin.ignore();

    } while (pedido.preco != 0);

    for (const auto& pedido : pedidos)
        {
            cout << "Prato: " << pedido.prato << "\nPre�o: " << pedido.preco << "\nQuantidade: "
                 << pedido.quant <<  "\nTotal: " << pedido.total << endl << endl;
        }
}
=======
/* Implementar um programa para registrar pedidos em um
restaurante, coletando informa��es como o nome do prato,
quantidade e pre�o total. O programa deve continuar recebendo
novos pedidos at� que um valor espec�fico seja inserido como
pre�o. */

#include <iostream>
#include <string>
#include <vector>
#include <locale>

using namespace std;

struct Restaurante
{
    string prato;
    float preco;
    float total;
    int quant;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    vector<Restaurante> pedidos;

    Restaurante pedido;

    do
        {

        cout << "Nome do prato: ";
        getline(cin, pedido.prato);

        cout << "Pre�o do prato: ";
        cin >> pedido.preco;

        cout << "Quantidade de pratos: ";
        cin >> pedido.quant;

        pedido.total = pedido.preco * pedido.quant;

        if(pedido.preco != 0)
            {
                pedidos.push_back(pedido);
            }

        cout << "\nPedido registrado!" << endl << endl;
        cin.ignore();

    } while (pedido.preco != 0);

    for (const auto& pedido : pedidos)
        {
            cout << "Prato: " << pedido.prato << "\nPre�o: " << pedido.preco << "\nQuantidade: "
                 << pedido.quant <<  "\nTotal: " << pedido.total << endl << endl;
        }
}
>>>>>>> 4d89c018ea423ceb1fba011aec5349ba292c7db2
