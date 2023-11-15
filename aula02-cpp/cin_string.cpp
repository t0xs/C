#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL,"");

	string nome;
	cout << "Informe o seu nome ...: ";
	getline(cin >> ws, nome);
	
	cout << "\nNome " << nome;
	return 0;
}
