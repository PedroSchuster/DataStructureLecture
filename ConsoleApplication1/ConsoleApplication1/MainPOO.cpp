#include <iostream>
#include "AltClass.cpp"
using namespace std;

int main() {
	MyClass *classe;
	classe = new MyClass(1,10);

	classe->foo(); // para acessar por meio de ponteiro, alocaçao dinamica, se acessa os metodos
				  // por meio de ->

	MyClass classe2(1,4);

	classe2.foo(); // dai aqui eh por . pois eh alocação estatica, por meio da criaçao de um objeto e n ponteiro

	delete classe; // é preciso destruir o ponteiro para nao ocupar espaço
				   // objeto não precisa fazer isso pois quando sai de contexto o garbage colector vai chamar aquele metodo de delete
}