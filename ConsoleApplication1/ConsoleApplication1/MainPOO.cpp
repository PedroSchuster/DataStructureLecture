#include <iostream>
#include "AltClass.cpp"
using namespace std;

int main() {
	MyClass *classe;
	classe = new MyClass();

	//classe->foo(); // para acessar por meio de ponteiro, aloca�ao dinamica, se acessa os metodos
				  // por meio de ->

	MyClass classe2;

	//classe2.foo(); // dai aqui eh por . pois eh aloca��o estatica, por meio da cria�ao de um objeto e n ponteiro

	MyClass vet[50];
	vet[0] = *classe;

	MyClass* m;

	m = vet;
	
	m = m + 1; //aritimetica de ponteiros, isso aqui vai somar o numero de bytes que a classe MyClass possui
	cout << m[100].foo();

	//delete classe; // � preciso destruir o ponteiro para nao ocupar espa�o
				   // objeto n�o precisa fazer isso pois quando sai de contexto o garbage colector vai chamar aquele metodo de delete
}