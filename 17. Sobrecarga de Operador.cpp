#include <iostream>

using namespace std;

class Complexo
{
public:
    int real, imag;

    Complexo(int real, int imag)
    {
        this -> real = real;
        this -> imag = imag;
    }

    Complexo operator+(Complexo &c) //O operador pertence a um dos objetos que estah sendo operado, entao c = c2
    {
        return  Complexo(this->real + c.real, this-> imag + c.imag);
    }

};

int main()
{

    Complexo c1(1, 2), c2(3, 4);
    Complexo c3 = c1 + c2;
    //Complexo c3 = c1.operator+(c2); //outra forma

    cout << "Parte real: " << c3.real << endl;
    cout << "Parte imaginaria: " << c3.imag << endl;

    return 0;
}
