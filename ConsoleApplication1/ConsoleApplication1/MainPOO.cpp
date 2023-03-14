#include <iostream>
#include "AltClass.cpp"
using namespace std;

int main() {
	MyClass *classe;
	classe = new MyClass();

	//classe->foo(); // para acessar por meio de ponteiro, alocaçao dinamica, se acessa os metodos
				  // por meio de ->

	MyClass classe2;

	//classe2.foo(); // dai aqui eh por . pois eh alocação estatica, por meio da criaçao de um objeto e n ponteiro

	MyClass vet[50];
	vet[0] = *classe;

	MyClass* m;

	m = vet;
	
	m = m + 1; //aritimetica de ponteiros, isso aqui vai somar o numero de bytes que a classe MyClass possui
	cout << m[100].foo();

	//delete classe; // é preciso destruir o ponteiro para nao ocupar espaço
				   // objeto não precisa fazer isso pois quando sai de contexto o garbage colector vai chamar aquele metodo de delete
}