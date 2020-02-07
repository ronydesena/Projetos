#include <iostream>
#include <string.h>

using namespace std;

class Linguagem // linguagem pode acessar os membros protegidos de LinguagemAmiga, mas o contrário não eh verdadeiro
{
    friend void classeAmiga(Linguagem* l);
private:
    const char* nome;

public:
    void mostrarNome()
    {
        cout << "Nome: " << nome << endl;
    }

    void setnome(const char* a)
    {
        this->nome = a;
    }
};

class Linguagem Amiga
{
    friend class Linguagem;
};

void classeAmiga(Linguagem* l)
{
    cout << "Classe amiga diz: " << l->nome << endl;
}


int main()
{
    Linguagem l1;
    l1.setnome("Rony");

    l1.mostrarNome();

    classeAmiga(&l1);

    return 0;
}
