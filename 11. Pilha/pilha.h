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
    Pilha(int tam);
    ~Pilha();
    void empilhar(int e);
    void desempilhar();
    int getTopo();
    int vazia();
};

#endif // PILHA_H_INCLUDED
