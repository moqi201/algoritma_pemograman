#include <iostream>
using namespace std;
void keliling(int, int, int *); // prototipe fungsi
int main()
{
    int panjang , lebar , kel;
    cout << "Masukkan Panjang: " << endl;
    cin >> panjang;
    cout << "Masukkan Lebar: " << endl;
    cin >> lebar;
    keliling(panjang, lebar, &kel);
    cout << "Keliling: " << kel << endl;
}
void keliling(int a, int b, int *k)
{
    *k = 2 * (a + b);
}
