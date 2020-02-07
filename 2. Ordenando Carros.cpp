#include<iostream>
#include<string.h>
#define MAX 10

using namespace std;

class Carro
{
public:
    char nome[100];
    char cor[20];
    char placa[20];
    double preco;
};

//ordenacao utilizando o algoritmo buble sort
void ordena(Carro carros[], int tam)
{
    int i, j;
    Carro aux;

    for(i = tam; i >= 0; i--)
    {
        for(int j = 1; j <=i; j++)
        {
            //if(vet[j-1].nome > vet[j].nome)
            if(strcmp(carros[j-1].nome, carros[j].nome) == 1)
            {

                aux = carros[j-1];
                carros[j-1] = carros[j];
                carros[j] = aux;
            }
        }
    }
}

int main()
{
   Carro carros[MAX];
   int i = 0;

   while(true)
   {
       char resp;

       cout << "Digite o nome do carro: ";
       cin >> carros[i].nome;

       cout << "Digite o preco: ";
       cin >> carros[i].preco;

       cout << "Voce deseja continuar? <S>SIM ou <N>NAO: ";
       cin >> resp;

       if(resp != 'S')
            break; //nao quer continuar, sai do loop
            cout << endl; //se não, salta uma limpa e incrementa para guardar o proximo elemento
            i++;
   }

       cout << endl;
       cout << "Exibindo todos os carros...\n\n";
       for(int j = 0; j <= i; j++)
       {
           cout << "Nome do carro: " << carros[j].nome << endl;
           cout << "Preco: R$ " << carros[j].preco << endl << endl;
       }

       ordena(carros, i);

       cout << "Exibindo os carros ordenados pelo nome...\n\n";
        for(int j = 0; j <= i; j++)
       {
           cout << "Nome do carro: " << carros[j].nome << endl;
           cout << "Preco: R$ " << carros[j].preco << endl << endl;
       }


   return 0;
}
