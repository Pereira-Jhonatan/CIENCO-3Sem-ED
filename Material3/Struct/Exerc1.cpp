/* Criar um programa que registre informa��es de v�rios
pacientes, incluindo nome, idade e um sintoma espec�fico. O
programa deve permitir a entrada de dados para m�ltiplos
pacientes at� que o usu�rio decida parar. */

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
        cout << "Digite o s�ntoma do paciente: ";
        getline(cin, paciente.sintoma);
        cout << "Digite a idade do paciente: ";
        cin >> paciente.idade;

        system ("cls || clear");
        cout << "\nPaciente: " << paciente.nome << " | Idade: " << paciente.idade << " | S�ntoma: " << paciente.sintoma << endl;

        cout << "\nDeseja adicionar um novo paciente? (s/n) ";
        cin >> continuar;
        cin.ignore();
        continuar = tolower(continuar);

    } while (continuar == 's');

}
