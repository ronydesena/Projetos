#include <iostream>
#include<vector>

using namespace std;

class Ponto
{
public:
    int x, y;

    Ponto(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
};

int main()
{
    vector <Ponto*> vet;
    vector <Ponto*>::iterator it;

    int a, b;

    cout << "Digite a coordenada x: ";
    cin >> a;

    cout << "Digite a coordenada y: ";
    cin >> b;

    Ponto* p1 = new Ponto(a, b);
    Ponto* p2 = new Ponto(3, 4);

    vet.push_back(p1);
    vet.push_back(p2);

    for(it = vet.begin(); it != vet.end(); it++)
        cout << "(" << (*it)->x << ", " << (*it)->y << ")" << endl;



    return 0;
}
