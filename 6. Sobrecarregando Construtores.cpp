#include <iostream>

using namespace std;

class Carro
{
public:
    int ano;
    double preco;

    Carro()
    {
        ano = 0;
        preco = 0.0;
    }
    Carro(int ano)
    {
        this->ano = ano;
        this->preco = 0.0;
    }
    Carro(int ano, double preco)
    {
        this->ano = ano;
        this->preco = preco;
    }
};

int main()
{
    Carro carro;
    Carro carro2(2014);
    Carro carro3(2014, 200000);

    cout << carro.ano << endl;
    cout << carro2.ano << endl;
    cout << carro3.ano << endl;
}
