#include <iostream>
#include <cstdlib>
#include "input.h"
using namespace std;
void cari4(int data4[], int jml, int cari, int *dx);
int main()
{
    system("cls");
    inputNama();
    int data4[] = {20, 12, 120, 9, 8, 40};
    int cari , m, jml = 6;
    int dx;
    cout << "Elemen Array : ";
    for (m = 0; m < jml; m++)
    cout << data4[m] << " ";
    cout << endl;
    cout << "masukan data yang akan dicari ? ";
    cin >> cari;
    cout << "Data yang dicari adalah " << cari;
    cari4(data4, jml, cari, &dx);
    if (dx != -1)
        cout << "\nData yang dicari ditemukan pada indeks ke-"<<dx<<endl;
    else cout << "\nData yang dicari tidak ditemukan" << endl;
}
void cari4(int data4[], int jml, int cari, int *dx)
{
    int m = jml - 1;
    while (m >= 0 && data4[m] != cari)
        m--;
    if (data4[m] == cari)
        *dx = m;
    else
        *dx = -1;
}