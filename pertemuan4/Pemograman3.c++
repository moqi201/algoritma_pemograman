#include <iostream>
#include <math.h>
using namespace std;
int luas(int a, int b);
int keliling(int a, int b);
double diagonal(int a, int b);
int main()
{
    int panjang, lebar;
    int l, k;
    double d;
    cout << "masukan Panjang: " << endl;
    cin >> panjang;
    cout << "masukan Lebar: " << endl;
    cin >> lebar;
    l = luas(panjang, lebar);
    k = keliling(panjang, lebar);
    d = diagonal(panjang, lebar);
    cout << "Segi Empat" << endl;
    cout << "Panjang : " << panjang << endl;
    cout << "Lebar : " << lebar << endl;
    cout << "Luas : " << l << endl;
    cout << "Keliling: " << k << endl;
    cout << "Diagonal: " << d << endl;
}
int luas(int a, int b)
{
    return a * b;
}
int keliling(int a, int b)
{
    return 2 * (a + b);
}
double diagonal(int a, int b)
{
    return (double)sqrt(a * a + b * b);
}