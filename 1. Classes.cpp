#include <iostream>
#include <string.h>

using namespace std;

class Pessoa
{
public:
    const char* nome;
    const char* cpf;
    int idade;
};

int getIdade(Pessoa pessoas[], char nome[])
{
    int tam = sizeof(pessoas);

    for(int i = 0; i < tam; i++)
    {
        if(strcmp(nome, pessoas[i].nome) == 0) return pessoas[i].idade;
    }
    return -1;
}

int main()
{
    //Pessoa p1 = {"Rony", "70126772444", 23};
    //cout << p1.nome << " - " << p1.cpf << " - " << p1.idade;

    Pessoa pessoas[3] = {
                {"joao", "1111111111", 30},
                {"maria", "666666666", 40},
                {"Pedro", "33333333", 87},
    };

    cout << pessoas[0].nome << " - " << pessoas[0].cpf << " - " << pessoas[0].idade << endl;
    cout << pessoas[1].nome << " - " << pessoas[1].cpf << " - " << pessoas[1].idade << endl;
    cout << pessoas[2].nome << " - " << pessoas[2].cpf << " - " << pessoas[2].idade << endl;

    int idade = getIdade(pessoas, "Pedro");

    if(idade != -1)
        cout << "Idade do Pedro: " << idade << endl;
    else
        cout << "Pessoa nao encontrada." << endl;

    return 0;
}
