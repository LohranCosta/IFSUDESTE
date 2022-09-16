#pragma once

using namespace std;

class produto{
            
private:
    string Nome;
    float Custo;
    float Preco;
    int Estoque;

   public:
        produto();
        string getNome();
        void setNome(string Nome);
  
        float getCusto();
        void setCusto(float Custo);

        float getPreco();
        void setPreco(float Preco);

        int getEstoque();
        void setEstoque(int Estoque);

        float calculaCusto();    
        void cadastrar(); 
        void imprimir(); 


 
};

