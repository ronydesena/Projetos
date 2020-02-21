#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v(3);
    v[0] = 11;
    v[1] = 12;
    v[2] = 13;

    vector <int>::iterator it;
    it = v.begin();

    for(it = v.begin(); it!= v.end(); it++)
    {
        cout << *it << endl;
    }

    cout << "Primeiro elemento: " << *v.begin() << endl;
    cout << "Ultimo elemento: " << *(v.end()-1) << endl;



    vector <int>::reverse_iterator rit;

    int i = 0;
    for(rit = v.rbegin(); rit!= v.rend(); rit++)
    {
        *rit =++i;
    }

    for(it = v.begin(); it!= v.end(); it++)
    {
        cout << *it << endl;
    }

    if(v.empty())
        cout << "Vetor vazio" << endl;
    else
        cout << "Vetor nao vazio" << endl;

    while(!v.empty())
        v.pop_back();

    if(v.empty())
        cout << "Vetor vazio" << endl;
    else
        cout << "Vetor nao vazio" << endl;


    return 0;
}
