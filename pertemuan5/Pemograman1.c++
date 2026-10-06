#include <iostream>
using namespace std;
int Fakt(int); // prototipe
int main()
{
    int k ;
    cout << "input nilai K :" << endl;
    cin >> k;
    cout << "Faktorial ke " << k << " adalah " << Fakt(k);
}
int Fakt(int n)
{
    if (n == 0)
        return 1;           // basis
    return n * Fakt(n - 1); // rekurens
}