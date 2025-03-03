#include<iostream>
#include<string.h>

using namespace std;

class Animal
{
protected:
    char* nome;
    int patas;
public:
    Animal(const char* nome)
    {
        cout << "Constuindo animal" << endl;
        this->nome = new char[strlen(nome) + 1];
        strcpy(this->nome, nome);
        patas = 0;
    }

    ~Animal()
    {
        delete[] nome;
        nome = 0;
    }

    const char* getNome()
    {
        return nome;
    }

    int getPatas()
    {
        return patas;
    }
};

class Cachorro : public Animal
{
protected:
        int idade;

public:
    Cachorro(const char* nome) : Animal(nome)
    {
        cout << "Construindo cachorro" << endl;
        idade = 0;
    }

    int getIdade()
    {
        return idade;
    }

    void setIdade(int idade)
    {
        this->idade = idade;
    }
};

int main()
{
    Cachorro c("Yankee");
    c.setIdade(10);

    cout << c.getNome() << " - " << c.getIdade() << endl;

    return 0;
}
