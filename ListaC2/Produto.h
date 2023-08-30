#pragma once
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;
class Produto
{
private:
	string nome;
	float valor;
public:
	Produto();
	Produto(string nome, float valor);
	Produto(Produto &copiaProduto);
	string getNome();
	float getValor();
	void setNome(string nome);
	void setValor(float valor);
	void PreencherCampos();
	void ImprimeCampos();
	void Copiar(Produto outro);
};

