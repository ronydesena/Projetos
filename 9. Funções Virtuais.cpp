#include<iostream>

using namespace std;
//Por padr�o, o C++ utiliza a liga��o primatura, mas � poss�vel fazer
//a tardia utilizando a palavra reservada "virtual"
class ClasseMae
{
public:
    virtual void mostrarMensagem()
    {
        cout << "Classe mae" << endl;
    }
};

class ClasseFilha : public ClasseMae
{
public:
   virtual void mostrarMensagem()
    {
        cout << "Classe filha" << endl;
    }
};

void fool(ClasseMae* p)
{
    p->mostrarMensagem();
}

int main()
{
    ClasseMae mae;
    ClasseFilha filha;

    mae.mostrarMensagem();
    filha.mostrarMensagem();

    fool(&mae);
    fool(&filha);

    return 0;
}
