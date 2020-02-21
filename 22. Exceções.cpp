#include<iostream>

using namespace std;

// try catch throw

double div(double n1, double n2)
{
    if(n2 == 0)
    {
        throw "Divisao por zero! \n";
    return n1/n2;
    }
}

int fat(int n)
{
    if(n < 0)
    throw "Numero negativo!!!";

    if(n == 0 || n == 1)
        return 1;
    return n * fat(n - 1);
}

int main()
{
    //o try tenta executar o try. Se algo pode dar errado
    //se ocorrer alguma execeção, eu vou pegar essa exceção com o catch
    try
    {
        cout << "Fatorial de 5: " << fat(5) << endl;
        //cout << "Fatorial de -5: " << fat(-5) << endl;
        cout << "Divisao de 10/0: " << div(10, 0) << endl;
    }
    catch(const char* e)
    {
        cerr  << "Erro: " << e << endl;
    }
    catch(...)
    {
        cerr << "Erro inesperado" << endl;
    }
    return 0;
}
