#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int> v;
    v.push_back(5);
    v.push_back(10);
    v.push_back(45);

    int tam = v.size();
    for(int i = 0; i < tam; i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}
