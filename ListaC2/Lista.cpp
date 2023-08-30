#include "Lista.h"
using namespace std;

Lista::Lista()
{
	int tam = 0;
	int quant = 0;
	//this->listaP = new Produto[tam];
}
Lista::Lista(int tam)
{
	this->tam = tam;
	this->quant = 0;
	this->listaP = new Produto[tam];
}

void Lista::insert(Produto p, int index)
{
	if (quant < tam)
	{
		shiftEnd(index);
		listaP[index].Copiar(p);
		quant++;
	}
	else
		cout << "Lista cheia";
}

void Lista::shiftEnd(int index)
{
	for (int i = quant; i >= index + 1; i--)
		listaP[i].Copiar(listaP[i - 1]);
}
void Lista::imprimeLista()
{
	if (quant > 0)
		for (int i = 0; i <= quant - 1; i++)
			listaP[i].ImprimeCampos();
	else
		cout << "Lista VAZIA" << endl;
}
void Lista::shiftFront(int index)
{
	for (int i = index; i < quant - 1; i++)
		listaP[i].Copiar(listaP[i + 1]);
}

void Lista::Remove(int index)
{
	if (quant > 0)
	{
		shiftFront(index);
		quant--;
	}
	else
		cout << "LISTA VAZIA" << endl;
}

void Lista::Search_byName(string nomeL)
{
	for (int i = 0; i < quant - 1; i++)
	{
		if (listaP[i].getNome() == nomeL)
			listaP[i].ImprimeCampos();
	}
}