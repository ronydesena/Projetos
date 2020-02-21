#include <iostream>
#include "pilha.h"

using namespace std;

int main()
{
    Pilha<int> p(100);

    p.empilhar(10);
    p.empilhar(11);
    p.empilhar(12);
    p.desempilhar();
    cout << "Pilha vazia: " << p.vazia() << endl;
    cout << "Topo: " << p.getTopo() << endl;

    return 0;
}
