class Roda {
    private:
        int Quantidade;
        float Preco;

    public:
        Roda();
        int getQuantidade();
        void setQuantidade(int Quantidade);

        float getPreco();
        void setPreco(int Preco);

        void preencherCampos();
        void imprime();
}