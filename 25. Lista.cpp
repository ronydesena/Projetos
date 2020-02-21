#include <iostream>
#include<list>

using namespace std;
//os vetores sao recomendados para armazenar dados que mudarao pouco ao longo do tempo

//o vector pr� aloca espa�o para elementos futuros, enquanto a list n�o pr�-aloca memoria
//o vector cada elemento somente requer espa�o para o tipo dele, n�o possui ponteiros extras. J� na lista, cada elemento requer espa�o extra para o n� que det�m o elemento, incluindo ponteiros
//o vector � indicado para acessar os elementos aleatoriamente
//A lista eh indicada para remocao e inser��o, mas sem acessoa aleatorio

int main()
{
    list <int> l1;
    list <int> l2(3, 10);
    list <int>::iterator it;

    l1.push_back(10);
    l1.push_front(20);
    l1.push_back(30);

    cout << "Elementos de l1: " << endl;
    for(it = l1.begin(); it!= l1.end(); it++)
    {
        cout << *it << endl;
    }

    cout << endl << "Elementos de l2: " << endl;
        for(it = l2.begin(); it!= l2.end(); it++)
    {
        cout << *it << endl;
    }

    cout << endl << "Primeiro elemento de l1: " << l1.front() << endl;
    cout << "Ultimo elemento de l1: " << l1.back() << endl;
    cout << "Tamanho de l1: " << l1.size() << endl;

    l1.pop_front();
    l1.pop_back();


    cout << endl << "Elementos de l1: " << endl;
    for(it = l1.begin(); it!= l1.end(); it++)
    {
        cout << *it << endl;
    }

    cout << endl << "Elementos de l2: " << endl;
        for(it = l2.begin(); it!= l2.end(); it++)
    {
        cout << *it << endl;
    }


    list <int>::iterator it2;
    it2 = l2.begin();
    it2++;
    it2++;

    l2.erase(l2.begin(), it2);

        cout << endl << "Elementos de l2: " << endl;
        for(it = l2.begin(); it!= l2.end(); it++)
    {
        cout << *it << endl;
    }

    l2.clear();

        cout << endl << "Elementos de l2: " << endl;
        for(it = l2.begin(); it!= l2.end(); it++)
    {
        cout << *it << endl;
    }




     return 0;
}
