#include <iostream>
#include <stack>
using namespace std;
int main(){
	
	stack <string> cartas;
	
	if(cartas.empty()){
		cout << "Pilha vazia !!! \n\n";
	}
	else {
		cout << "Pilha com cartas!!! \n\n";
	}
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espadas");
	cartas.push("Rei de Ouros");
	cartas.push("Rei de Paus");

	cout << "Quantidade de Cartas inseridas : " << cartas.size() << "\n";
	cout << "Carta do topo :" << cartas.top() << endl;
	cout << "-- Limpando a Pilha -- ";	
	while(!cartas.empty()){
		cartas.pop();	
		if (cartas.size() > 0) 
		{
			cout << endl << "Qtd Atual " << cartas.size() << "\n";
			cout << "Carta do topo agora :" << cartas.top() << "\n";		
		}	
	}
	return 0;
}
