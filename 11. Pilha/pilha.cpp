#include <iostream>
#include "pilha.h"

using namespace std;

template <class Type>
    Pilha::Pilha(int tam)
    {
        vet = new Type[tam];
        max_tam = tam - 1;
        topo  = -1;
    }

    Pilha::~Pilha()
    {
        delete [] vet;
    }

    void Pilha::empilhar(Type e)
    {
        if(topo == max_tam)
            cout << "Pilha cheia" << endl;
        else
            vet[++topo] = e;
    }

    void Pilha::desempilhar()
    {
        if(topo == -1)
            cout << "Pilha vazia" << endl;
        else
            topo--;
    }

    int Pilha::getTopo()
    {
        if(topo != -1)
            return vet[topo];
        return -1;
    }

    int Pilha::vazia()
    {
        return (topo == -1);
    }
