#include<iostream>
#include<string.h>
#define MAX 10

using namespace std;

class Conta
{
public:
    int numero;
    double saldo; //atributo
    double depositar (double quantidade); //verbos=fun��es membros ou metodos
    double retirar (double quantidade);
    double getSaldo();
};

    double Conta::depositar (double quantidade) //verbos=fun��es membros ou metodos
    {
        if(quantidade > 0) saldo += quantidade;
        return saldo;

    }

    double Conta::retirar (double quantidade)
    {
        if(saldo >= quantidade && quantidade > 0) saldo -= quantidade;
        return saldo;
    }

    void foo(Conta* pc)
    {
        pc->depositar(50);
    }//Por padr�o, C++ passa os valores por copia, logo n�o altera o valor

    /*void foo(Conta& c)
    {
        c.depositar(50); //passando por referencia, mesmo efeito que se estivesse passando por endere�o
    }*/

    double Conta::getSaldo()
    {
        return saldo;
    }

    Conta* novaConta(int numero)
    {
        Conta* c = new Conta;
        c->numero = numero;
        c->saldo = 0.0;
        return c;
    }

int main()
{
   Conta c;
   Conta* pc = &c;

   pc->numero = 1;
   pc->saldo = 200;

   foo(&c);//passando o endere�o do objeto c

    cout << "O saldo eh: " << pc->getSaldo() << endl;

    Conta* nova = novaConta(1111);
    cout << "Numero: " << nova->numero << endl;
    cout << "Saldo: " << nova->saldo << endl;
   return 0;
}
