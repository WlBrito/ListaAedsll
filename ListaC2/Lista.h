#pragma once
#include "Produto.h"

class Lista
{
private:
	int tam;
	int quant;
	Produto* listaP;
public:
	Lista();
	Lista(int tam);
	void shiftEnd(int index);
	void imprimeLista();
	void shiftFront(int index);
	void Remove(int index);
	void Search_byName(string nomeL);
	void insert(Produto p, int index);
};

