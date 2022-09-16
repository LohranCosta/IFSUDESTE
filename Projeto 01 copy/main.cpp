#include <iostream>
#include <string.h>
#include "produto.cpp"
using namespace std;


int main(){
    produto um;
    um.setNome("Cafe");
    um.setEstoque(20);
    um.setCusto(9.99);
    um.setPreco(12.50);

    um.getNome();
    um.cadastrar();
    um.imprimir();

    system("PAUSE");

    cout <<" Valor de Lucro: "<< um.calculaCusto();
return 0;
 }