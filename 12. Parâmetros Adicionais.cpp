#include <iostream>

using namespace std;

/*int quad(int num = 2)
{
    return num*num;
}
*/

class Carro
{
private:
    int ano;
public:
    Carro(int ano = 2008)
    {
        this->ano = ano;
    }

    int getAno()
    {
        return ano;
    }

    void setAno(int ano)
    {
        this->ano = ano;
    }
};

int main()
{
    /*

    int num = 10;

    cout << "Quadrado: " << quad() << endl;

    */

    Carro c;
    cout << "Ano: " << c.getAno();
}
