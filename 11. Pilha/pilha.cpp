#include <iostream>
#include "pilha.h"

using namespace std;

template <class Type>

template <class Type>
    Pilha<Type>::~Pilha()
    {
        delete [] vet;
    }

template <class Type>
    void Pilha<Type>::empilhar(Type e)
    {
        if(topo == max_tam)
            cout << "Pilha cheia" << endl;
        else
            vet[++topo] = e;
    }

template <class Type>
    void Pilha<Type>::desempilhar()
    {
        if(topo == -1)
            cout << "Pilha vazia" << endl;
        else
            topo--;
    }

template <class Type>
    Type Pilha::getTopo()
    {
        if(topo != -1)
            return vet[topo];
        return -1;
    }

template <class Type>
Type Pilha::vazia()
    {
        return (topo == -1);
    }
