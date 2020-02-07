#include <iostream>
#include <string.h>

using namespace std;

class Pessoa
{
protected:
    const char* nome;
    int idade;
    int* parentes;
    double* filhos;
public:
    Pessoa(const char* nome, int idade)
    {
        this->nome = nome;
        this->idade = idade;
        parentes = new int[100];
        cout << "Entrando no construtor: " << nome << endl;
    }

    const char* getNome()
    {
        return nome;
    }

    int getIdade()
    {
        return idade;
    }
    ~Pessoa()
    {
        cout << "Entrando no destrutor: " << nome << endl;
        delete[] parentes;
    }
};

int main()
{
    //Pessoa p("joao", 30);

    Pessoa pessoas[3] = {
        {"Joao", 30}, {"Maria", 20}, {"Pedro", 40},
    };

    //cout << p.getNome() << " - " << p.getIdade() << endl;

    return 0;
}
