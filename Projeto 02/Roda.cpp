#include "Roda.h"
    
    Roda :: Roda(){
        Quantidade = 0;
        Preco = 0.0;
    }

    int getQuantidade(){
        return Quantidade;
    }
    int getPreco(){
        return Preco;
    }
    void Roda :: setQuantidade(int Quantidade){
        this->Quantidade = Quantidade;
    }
    void Roda :: setPreco(float Preco){
        this->Preco = Preco;
    }
