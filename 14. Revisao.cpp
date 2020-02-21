#include <iostream>

using namespace std;

class Pessoa
{
private:
    int idade;
    int * vet;
public:
    Pessoa(int idade)
    {
        this->idade = idade;
        vet = new int[10];
    }
    ~Pessoa()
    {
        delete [] vet;
    }
    int obterIdade()
    {
        return idade;
    }
};

int main()
{
    /* Primeira parte da revisão
    int * p = new int[10];
    * p = 1;
    *(p + 1) = 9;
    cout << *p << endl << *(p+1) << endl;
    delete [] p;
    */

    Pessoa * p = new Pessoa(20);
    cout << p->obterIdade();
    delete p;

    return 0;
}
