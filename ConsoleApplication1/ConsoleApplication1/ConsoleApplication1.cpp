// ConsoleApplication1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>

using namespace std;

float* vetor(int N) // precisa ser antes de onde vai ser chamado, a ordem das funçoes importa
{
	float* vet;
	vet = new float[N]; // se n for assim vai dar erro pois precisa ser um valor constante 
	for (int i = 0; i < N; i++)
	{
		vet[i] = i;
	}
	return vet; // ou return &vet[0];
}

int soma_simples(int x, int y) { 
	// cria uma copia de x e y como passagem de parametros
	int z;
	z = x + y;
	x += 2020;
	y += 3214;
	return z;
}

int soma_pont(int *px, int *py) {
	// não cria uma copia, mas como sao ponteiros e tao tentando acessar o conteudo de um endereço
	// eh preciso passar como argumento um endereço no caso &var
	int z;
	z = *px + *py;
	*px += 10;
	*py += 100; // dai vai mudar a variavel como se fosse um ref do C# 
	return z;
}

int soma_end(int& x, int& y) {
	// nao cria copia, compartilha do endereço das variavies passadas como argumento
	int z;
	z = x + y;
	x += 100; // como ta compartilhando o msm endereço, mudar o valor aki tbm vai mudar o valor la 
	y += 100;
	return z;
}

int main_v1()
{
	float x;
	float *p; // declaracao de ponteiro  

	x = 7.5;
	p = &x; // atribuiçao do endereço de X

	//cout << *p; // utilizaçao do conteudo desse endereço 
				// *var == acessa o conteudo daquele endereço

	int a = 5;
	int b = 7;
	int c = soma_simples(a, b);

	cout <<  a << endl;
	cout <<  b << endl;
	cout <<  c << endl;


	int v1[100]; // alocaçao estatica

	int* v2;
	v2 = new int[100]; // alocaçao dinamica

	// v2 = v1 caso n seja atribuido como acima
	// ou v2 = &v1[0]
	//delete[] v2;
	int N = 100;
	float *R;
	R = vetor(N);

	/**for (int i = 0; i < N; i++)
	{
		cout << R[i] << endl;
	}**/
	return 0;
}


