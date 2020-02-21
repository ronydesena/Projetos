#include <iostream>

using namespace std;

inline void foo()//uma função inline serve para deixar a execução mais rapida
{
    cout << "Aprendendo C++\n" << endl;
}

int main()
{
    foo();
    return 0;
}
