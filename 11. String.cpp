#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str = "Rony Sena";

    cout << str << endl;
    cout << "Tamanho: " << str.size() << endl;
    cout << str.at(1) << endl;
    cout << str.back() << endl; //retorna o ultimo elemento
    cout << str.front() << endl; //retorna o primeiro

    //str.append(" Lourenc"); //concatena
    //str.push_back('o'); //adiciona caractere
    //str.insert(0, "Lourenco"); //empura a string de indice 0
    str.insert(str.size(), " Lourenco");
    str.erase(5, str.size());
    cout << "Nome Completo: " << str << endl;
    //str.erase(0, str.size()); // ou str.clear() //apagando a string

    if(str.empty())
        cout << "String vazia! " << endl;
    else
        cout << "String não vazia! " << endl;

    str.replace(0, 2, "Substituindo");

    cout << str << endl;
    return 0;
}
