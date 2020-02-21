#ifndef PILHA_H_INCLUDED
#define PILHA_H_INCLUDED

template <class Type>
class Pilha
{
private:
     Type* vet;
     int max_tam;
     int topo;
public:
    Pilha<Type>::Pilha(int tam)
    {
        vet = new Type[tam];
        max_tam = tam - 1;
        topo  = -1;
    }

    ~Pilha<Type>();
    void empilhar(Type e);
    void desempilhar();
    Type getTopo();
    int vazia();
};

#endif // PILHA_H_INCLUDED
