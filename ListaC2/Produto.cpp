#include "Produto.h"
#include <iostream>
using namespace std;

Produto::Produto()
{
	this->nome = "";
	this->valor = 0.0;
}
Produto::Produto(string nome, float valor)
{
	this->nome = nome;
	this->valor = valor;
}
Produto::Produto(Produto& copiaProduto)
{
	this->nome = copiaProduto.getNome();
	this->valor = copiaProduto.getValor();
}
string Produto::getNome()
{
	return this->nome;
}
float Produto::getValor()
{
	return this->valor;
}
void Produto::setNome(string nome)
{
	this->nome = nome;
}
void Produto::setValor(float valor)
{
	this->valor = valor;
}
void Produto::PreencherCampos()
{
	cout << "Informe o nome do produto:";
	cin >> this->nome;
	cout << "informe o valor em reais:";
	cin >> this->valor;
}
void Produto::ImprimeCampos()
{
	cout << "NOME:" << this->nome << "\tValor:" << this->valor << endl;
}

void Produto::Copiar(Produto outro)
{
	this->nome = outro.getNome();
	this->valor = outro.getValor();
}