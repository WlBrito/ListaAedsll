#include "Produto.h"
#include "Lista.h"
#include <iostream>
using namespace std;
int main()
{
    Produto x;
    x.PreencherCampos();
    //x.ImprimeCampos();
    Lista listProducts(10);
    listProducts.insert(x, 0);
    //listProducts.imprimeLista();
    //listProducts.Remove(0);
    //listProducts.imprimeLista();
    cout << "Informe o nome de busca: ";
    string nomeL;
    cin >> nomeL;
    listProducts.Search_byName(nomeL);
}

