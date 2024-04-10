/* Criar um programa que registre informações de vários
pacientes, incluindo nome, idade e um sintoma específico. O
programa deve permitir a entrada de dados para múltiplos
pacientes até que o usuário decida parar. */

#include <iostream>
#include <locale>
#include <stdlib.h>

using namespace std;

struct Paciente
{
    string nome;
    int idade;
    string sintoma;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Paciente paciente;
    char continuar;

    do
    {
        cout << "\nDigite o nome do paciente: ";
        getline(cin, paciente.nome);
        cout << "Digite o síntoma do paciente: ";
        getline(cin, paciente.sintoma);
        cout << "Digite a idade do paciente: ";
        cin >> paciente.idade;

        system ("cls || clear");
        cout << "\nPaciente: " << paciente.nome << " | Idade: " << paciente.idade << " | Síntoma: " << paciente.sintoma << endl;

        cout << "\nDeseja adicionar um novo paciente? (s/n) ";
        cin >> continuar;
        cin.ignore();
        continuar = tolower(continuar);

    } while (continuar == 's');

}
