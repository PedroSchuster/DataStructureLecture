#include <iostream>
#include "AltClass.cpp"
using namespace std;

int main() {
	MyClass *classe;
	classe = new MyClass(1,10);

	classe->foo(); // para acessar por meio de ponteiro, aloca�ao dinamica, se acessa os metodos
				  // por meio de ->

	MyClass classe2(1,4);

	classe2.foo(); // dai aqui eh por . pois eh aloca��o estatica, por meio da cria�ao de um objeto e n ponteiro

	delete classe; // � preciso destruir o ponteiro para nao ocupar espa�o
				   // objeto n�o precisa fazer isso pois quando sai de contexto o garbage colector vai chamar aquele metodo de delete
}