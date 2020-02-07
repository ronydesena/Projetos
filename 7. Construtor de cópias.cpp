#include <iostream>
#include <string.h>

using namespace std;
//construtor de copias eh o construtor do c++ que eh utilizado para fazer copias de objetos
class Estudante
{
public:
    char* nome;
    Estudante()
    {
        cout << "Construindo objeto: " << nome << endl;
        int tam = strlen(nome) + 1;
        this->nome = new char[tam];
        strcpy(this->nome, nome);
    }

    Estudante(Estudante &e)
    {
        cout << "construindo copia de " << e.nome << endl;
        int tam = strlen(e.nome) + strlen("Copia de ") + 1;
        this->nome = new char[tam];
        strcpy(this->nome, "copia de ");
        strcat(this->nome, e.nome);
    }

    const char* getNome()
    {
        return nome;
    }

    ~Estudante()
    {
        cout << "Destruindo... " << nome << endl;
        delete[] nome;
        nome = 0;
    }
};

void foo2(Estudante e)
{

}

void foo()
{
    Estudante estudante("Pedro");
    foo2(estudante);
    cout << "Estudante " << estudante.getNome() << endl;
}

int main()
{
    Estudante e;

    cout << e.idade << endl;
    return 0;
}
