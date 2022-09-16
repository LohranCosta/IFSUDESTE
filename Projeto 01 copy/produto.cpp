#include "produto.h"
#include <iostream>
#include <string.h>

using namespace std;

produto :: produto(){
    Nome= " ";
    Custo = 0.0;
    Preco = 0.0;
    Estoque = 0;
}

string produto :: getNome(){
    return Nome;
}
float produto :: getCusto(){
    return Custo;
}
float produto :: getPreco(){
    return Preco;
}
int produto :: getEstoque(){
    return Estoque;
}

void produto :: setNome(string Nome){
    this->Nome = Nome;
}
void produto :: setCusto(float Custo){
    this->Custo = Custo;
}
void produto :: setPreco(float Preco){
    this->Preco = Preco;
}
void produto :: setEstoque(int Estoque){
    this->Estoque = Estoque;
}
float produto :: calculaCusto(){
    return Preco - Custo;
}
void produto :: cadastrar(){
    cout << "Informe seu nome: " << endl;
    cin >> this->Nome;
    cout << "Informe seu Custo: " << endl;
    cin >> this->Custo;
    cout << "Informe seu Preco: " << endl;
    cin >> this->Preco;
    cout << "Informe seu Estoque: " << endl;
    cin >> this->Estoque;
}

void produto :: imprimir(){
    cout << "Nome Cadastrado: " << Nome << endl;
    cout << "Custo Cadastrado: " << Custo << endl;
    cout << "Preco Cadastrado: " << Preco << endl;
    cout << "Estoque Cadastrado: " << Estoque << endl;
}