/* Fa�a um programa em C++ que crie um vetor de 10 inteiros, coloque
pe�a valores ao usu�rio e depois imprima todos os seus conte�dos na
ordem normal e depois inversa. A impress�o dos conte�dos dever� ser
feita usando ponteiro.  */

#include <iostream>
#include <locale>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");

	int vet[10];
	int* pVet = &vet[0];



	for(int i = 0; i < 10; i++){
		cout << "Entre com o " << i + 1 << "� n�mero: " << endl;
        cin >> vet[i];
	}

	cout << "\n-- Lista --\n";

	for(int i = 0; i < 10; i++){

		cout << *pVet << endl;
		pVet++;
	}


	cout << "\n\n-- Lista Inversa --\n";

	for(int i = 10; i > 0; i--){

		pVet--;
		cout << *pVet << endl;
	}

}
