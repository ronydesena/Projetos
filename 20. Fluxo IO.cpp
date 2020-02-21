#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("teste.txt");

    string texto;
    char c = in.get(); //retorna o proximo caractere
    texto.push_back(c); //inserindo o caractere na string

    cout << "\nMostrando cada caractere: ";
    while(in.good())//enquanto for possivel extrair caracteres do arquivo
    {
        cout << c; // mostrando o caractere
        c = in.get(); //pegando o proximo caractere
        texto.push_back(c); // inserindo o caractere na string
    }

    cout << "\nMostrando a string: " << texto << endl;
    return 0;
}
