#include <iostream>

using namespace std;

int main()
{
//<Condi��o> ? <Opera��o 1> : <Opera��o 2>;

    int num = 10;

    /*
    if(num > 10)
        cout << "Numero maior que 10" << endl;
    else
        cout << "Numero maior ou igual a 10" << endl;
     */

    (num > 10) ? (cout << "maior") : (cout << "menor ou igual");

return 0;
}
