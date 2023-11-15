#include <iostream>
#include <map>
#include <locale.h>
using namespace std;

int main() {
	
	setlocale(LC_ALL,"");
	map <int, string> meses;
	
	meses[1] = "Janeiro";
	meses[2] = "Fevereiro";
	meses[3] = "Março";
	meses[4] = "Abril";
	
	cout << "Imprimir o 2 mes : " << meses[2] << endl << endl;
	system("pause");
	system("cls");
	int key;
	cout << "Informe o numero do mês : ";
	cin >> key;
	
	if(meses.find(key) == meses.end())
		cout << "mês não encontrado";
	else
		cout << "mês encontrado : " << meses[key];
		
	int i;
	// imprimindo um mapa
	cout << "\nLista de elementos no mapa Meses \n";
	for (i=1;i<= meses.size();i++){
		cout << i << " - " <<  meses[i] << endl;
	}
}
